#!/usr/bin/env python

#   perf-libs-tools
#   Copyright 2017 Arm Limited. 
#   All rights reserved.

# Program to turn armpl.h into a library that can be preloaded to do logging

# 1. Manually preprocess armpl.h into PROTOTYPES to only have the BLAS/LAPACK/FFT prototypes - no semicolons!
# 2. Create output file and add header line
# 3. Loop over lines of PROTOTYPES
#    a. Read line
#    b. Get interface details
#    c. Make logging function
#       i. Prototype line without semicolon and a following bracket
#      i2. Declare "armpl_logging_struct logger;"
#      ii. Count <num_integer> and <num_char> porameters that we'll record
#     iii. "armpl_logging_enter(&logger, <fn_name>, <num_integer>, <num_char>," followed by list of integers and chars with dereferences but not types
#      iv. "real_<fn_name> = dlsym(RTLD_NEXT, "<fn_name>");"
#       v. Call line to "real_<fn_name>" without types and dereferencing
#      vi. "armpl_logging_leave(&logger);"
#     vii. return <return_val>
#    viii. Closing bracket


# NOTES :
#        At present LAPACKE functions are not in as:
#        * not recording the right data as derefencing stage is wrong in the armpl_logging_enter call
#        * the presence of const all over the place
#        * most importantly they just call the versions with underscores at the end

import re		# Regular expressions toolbox
import itertools	# Iteration toolbox
import json
def main(args=None):

   # Load appropriately made file
   fname = "./cusparse_super_clean"
   inputfile = open(fname, 'r')

   #   Create output file (Step 2)
   fname = "preload-gen.c"
   outputfile = open(fname, 'w')
   outputfile.write('#include "preloadlib.h"\n\n')

   prot = open("./types.json")
   data = json.load(prot)
   dtset = set()
   for type in data["types"]:
      dtset.add(type)
   print(dtset)
   prot.close()
   # Loop over input lines (Step 3 - inc step3a)
   for line in  inputfile:

      IargsToLog = []
      DEREFEDARGS = ""
      # First get interface details
      splitline = re.findall(r"[\w']+", line)
      ReturnType = splitline[0]
      FNNAME = splitline[1]
      REAL_FNNAME = "(*real_%s)" % FNNAME
      prototype = line.replace(FNNAME, REAL_FNNAME)
      # Now make logging function (Step 3.c.i)
      outputfile.write("%s{\n" % line)
      if (ReturnType != "void") :
         outputfile.write("\t%s returnVal;\n" % ReturnType)
      outputfile.write("\tarmpl_logging_struct logger;\n")
      # Count int and char parameters for recording (Step 3.c.ii)
      arg_arr = ["m", "n", "k", "lda", "ldb", "ldc", "batchCount", "nnz", "nnzb", "nnzB", "nnzD", "mb", "nb", "blockSize", "blockDim"]
      allowed_args = {}
      for arg_name in arg_arr:
          allowed_args[arg_name] = 0
        
      numInt = 0
      for entry in range(2, len(splitline)):
         strns = splitline[entry]
         if strns in allowed_args:
             allowed_args[strns] += 1
           
      Iargs = ""
      argNames = []
    #   args = [(numM, "m"), (numN, "n"), (numK, "k"), (numLDA, "lda"), (numLDB, "ldb"), (numLDC, "ldc"), (numBC, "batchCount")]
      for arg in allowed_args:
         count = allowed_args[arg]
         strn = arg
         if count > 0:
            numInt+=1
            IargsToLog.append("%s" % strn)
            argNames.append(strn)
      
      if numInt > 0:
         Iargs = ", ".join(IargsToLog)

      if Iargs != "":
         outputfile.write('\tarmpl_logging_enter(&logger, "%s", 0, %d, 0, %s);\n' % (FNNAME, numInt, str(Iargs)))
      else:
         outputfile.write('\tarmpl_logging_enter(&logger, "%s", 0, %d, 0);\n' % (FNNAME, numInt))

      # Do the symbol linking (Step 3.c.iv)
      outputfile.write('\t%s = dlsym(RTLD_NEXT, "%s");\n' % (prototype.rstrip('\n'), FNNAME))

      for entry in range (2, len(splitline)):
        #  index = entry+1
        #  if splitline[entry] == "const":
        #     DEREFEDARGS = "%s %s" % (DEREFEDARGS, str(splitline[entry]))
        #     if (entry < len(splitline)-2):
        #           DEREFEDARGS = "%s," % DEREFEDARGS
         if splitline[entry] not in dtset:
            DEREFEDARGS = "%s %s" % (DEREFEDARGS, str(splitline[entry]))
            if (entry < len(splitline)-2):
                  DEREFEDARGS = "%s," % DEREFEDARGS
      # Now call the function (Step 3.c.v)
      if (ReturnType != "void") :
         outputfile.write('\treturnVal = real_%s(%s);\n' % (FNNAME, DEREFEDARGS) )
      else :
         outputfile.write('\treal_%s(%s);\n' % (FNNAME, DEREFEDARGS) )

      # Now finish function (Step 3.c.vi-vii)
      outputfile.write("\tarmpl_logging_leave(&logger);\n");
      if (ReturnType != "void") :
         outputfile.write("\treturn returnVal;\n")
      outputfile.write("}\n")

if __name__ == '__main__':
    main()