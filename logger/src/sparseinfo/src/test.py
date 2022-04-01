
import json 
import re

f = open("types.json")

data = json.load(f)

sp = open("./cusparse_super_clean")

out = open("out.json", "w")

s = set()
for type in data["types"]:
    s.add(type)

not_seen = set()
for line in sp:
    splitline = re.findall(r"[\w']+", line)
    for entry in range(2, len(splitline)):
        if splitline[entry] not in s:
            not_seen.add(splitline[entry])
ls = list(not_seen)
print(ls)
json.dump(ls, out)



# import re
# inputFile = open("./sparseclean", "r")
# outputFile = open("TEST2", "w")
# for line in inputFile:
#     if line.startswith("CUSPARSE_DEPRECATED"):
#         print("happens")
#         continue
#     line = re.sub(r"cusparseStatus_t CUSPARSEAPI\n", "cusparseStatus_t ", line)
#     if line[0] == " ":
#         index = 0
#         for i, char in enumerate(line):
#             if char != " ":
#                 index = i
#                 break
#         new_line = line[0:i].replace(' ', '')+line[index:]
#         outputFile.write(new_line)
#     else:
#         outputFile.write(line)
# inputFile.close()
# outputFile.close()

# inputFile =  open("TEST2", "r")
# outputFile = open("TEST3", "w")
# for line in inputFile:
#     new_line = line.replace(",\n", ", ")
#     new_line = new_line.replace(")\n", ") ")
#     outputFile.write(new_line)
# inputFile.close()
# outputFile.close()

# inputFile =  open("TEST3", "r")
# outputFile = open("TEST4", "w")
# sp_reg = re.compile(r"\s+")
# for line in inputFile:
#     while "  " in line:
#         line = line.replace("  ", " ")
#     outputFile.write(line)
# inputFile.close()
# outputFile.close()