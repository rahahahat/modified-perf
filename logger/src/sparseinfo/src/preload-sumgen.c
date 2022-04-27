#include "preloadlib.h"

cusparseStatus_t cusparseCreate(cusparseHandle_t* handle)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreate", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreate)(cusparseHandle_t* handle) = dlsym(RTLD_NEXT, "cusparseCreate");
	returnVal = real_cusparseCreate( handle);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroy(cusparseHandle_t handle)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroy", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroy)(cusparseHandle_t handle) = dlsym(RTLD_NEXT, "cusparseDestroy");
	returnVal = real_cusparseDestroy( handle);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseGetVersion(cusparseHandle_t handle, int* version)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseGetVersion", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseGetVersion)(cusparseHandle_t handle, int* version) = dlsym(RTLD_NEXT, "cusparseGetVersion");
	returnVal = real_cusparseGetVersion( handle, version);
	armpl_logging_leave(&logger);
	return returnVal;
}

cusparseStatus_t cusparseCreateMatDescr(cusparseMatDescr_t* descrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateMatDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateMatDescr)(cusparseMatDescr_t* descrA) = dlsym(RTLD_NEXT, "cusparseCreateMatDescr");
	returnVal = real_cusparseCreateMatDescr( descrA);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyMatDescr(cusparseMatDescr_t descrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyMatDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyMatDescr)(cusparseMatDescr_t descrA) = dlsym(RTLD_NEXT, "cusparseDestroyMatDescr");
	returnVal = real_cusparseDestroyMatDescr( descrA);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCopyMatDescr(cusparseMatDescr_t dest, const cusparseMatDescr_t src)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCopyMatDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCopyMatDescr)(cusparseMatDescr_t dest, const cusparseMatDescr_t src) = dlsym(RTLD_NEXT, "cusparseCopyMatDescr");
	returnVal = real_cusparseCopyMatDescr( dest, src);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSetMatType(cusparseMatDescr_t descrA, cusparseMatrixType_t type)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSetMatType", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSetMatType)(cusparseMatDescr_t descrA, cusparseMatrixType_t type) = dlsym(RTLD_NEXT, "cusparseSetMatType");
	returnVal = real_cusparseSetMatType( descrA, type);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseMatrixType_t cusparseGetMatType(const cusparseMatDescr_t descrA)
{
	cusparseMatrixType_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseGetMatType", 0, 0, 0, 0);
	cusparseMatrixType_t (*real_cusparseGetMatType)(const cusparseMatDescr_t descrA) = dlsym(RTLD_NEXT, "cusparseGetMatType");
	returnVal = real_cusparseGetMatType( descrA);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSetMatFillMode(cusparseMatDescr_t descrA, cusparseFillMode_t fillMode)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSetMatFillMode", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSetMatFillMode)(cusparseMatDescr_t descrA, cusparseFillMode_t fillMode) = dlsym(RTLD_NEXT, "cusparseSetMatFillMode");
	returnVal = real_cusparseSetMatFillMode( descrA, fillMode);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsrsv2Info(csrsv2Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsrsv2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsrsv2Info)(csrsv2Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsrsv2Info");
	returnVal = real_cusparseCreateCsrsv2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsrsv2Info(csrsv2Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsrsv2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsrsv2Info)(csrsv2Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsrsv2Info");
	returnVal = real_cusparseDestroyCsrsv2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsric02Info(csric02Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsric02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsric02Info)(csric02Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsric02Info");
	returnVal = real_cusparseCreateCsric02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsric02Info(csric02Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsric02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsric02Info)(csric02Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsric02Info");
	returnVal = real_cusparseDestroyCsric02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateBsric02Info(bsric02Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateBsric02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateBsric02Info)(bsric02Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateBsric02Info");
	returnVal = real_cusparseCreateBsric02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyBsric02Info(bsric02Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyBsric02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyBsric02Info)(bsric02Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyBsric02Info");
	returnVal = real_cusparseDestroyBsric02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsrilu02Info(csrilu02Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsrilu02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsrilu02Info)(csrilu02Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsrilu02Info");
	returnVal = real_cusparseCreateCsrilu02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsrilu02Info(csrilu02Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsrilu02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsrilu02Info)(csrilu02Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsrilu02Info");
	returnVal = real_cusparseDestroyCsrilu02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateBsrilu02Info(bsrilu02Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateBsrilu02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateBsrilu02Info)(bsrilu02Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateBsrilu02Info");
	returnVal = real_cusparseCreateBsrilu02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyBsrilu02Info(bsrilu02Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyBsrilu02Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyBsrilu02Info)(bsrilu02Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyBsrilu02Info");
	returnVal = real_cusparseDestroyBsrilu02Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateBsrsv2Info(bsrsv2Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateBsrsv2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateBsrsv2Info)(bsrsv2Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateBsrsv2Info");
	returnVal = real_cusparseCreateBsrsv2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyBsrsv2Info(bsrsv2Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyBsrsv2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyBsrsv2Info)(bsrsv2Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyBsrsv2Info");
	returnVal = real_cusparseDestroyBsrsv2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateBsrsm2Info(bsrsm2Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateBsrsm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateBsrsm2Info)(bsrsm2Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateBsrsm2Info");
	returnVal = real_cusparseCreateBsrsm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyBsrsm2Info(bsrsm2Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyBsrsm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyBsrsm2Info)(bsrsm2Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyBsrsm2Info");
	returnVal = real_cusparseDestroyBsrsm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsru2csrInfo(csru2csrInfo_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsru2csrInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsru2csrInfo)(csru2csrInfo_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsru2csrInfo");
	returnVal = real_cusparseCreateCsru2csrInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsru2csrInfo(csru2csrInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsru2csrInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsru2csrInfo)(csru2csrInfo_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsru2csrInfo");
	returnVal = real_cusparseDestroyCsru2csrInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateColorInfo(cusparseColorInfo_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateColorInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateColorInfo)(cusparseColorInfo_t* info) = dlsym(RTLD_NEXT, "cusparseCreateColorInfo");
	returnVal = real_cusparseCreateColorInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyColorInfo(cusparseColorInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyColorInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyColorInfo)(cusparseColorInfo_t info) = dlsym(RTLD_NEXT, "cusparseDestroyColorInfo");
	returnVal = real_cusparseDestroyColorInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSetColorAlgs(cusparseColorInfo_t info, cusparseColorAlg_t alg)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSetColorAlgs", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSetColorAlgs)(cusparseColorInfo_t info, cusparseColorAlg_t alg) = dlsym(RTLD_NEXT, "cusparseSetColorAlgs");
	returnVal = real_cusparseSetColorAlgs( info, alg);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseGetColorAlgs(cusparseColorInfo_t info, cusparseColorAlg_t* alg)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseGetColorAlgs", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseGetColorAlgs)(cusparseColorInfo_t info, cusparseColorAlg_t* alg) = dlsym(RTLD_NEXT, "cusparseGetColorAlgs");
	returnVal = real_cusparseGetColorAlgs( info, alg);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreatePruneInfo(pruneInfo_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreatePruneInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreatePruneInfo)(pruneInfo_t* info) = dlsym(RTLD_NEXT, "cusparseCreatePruneInfo");
	returnVal = real_cusparseCreatePruneInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyPruneInfo(pruneInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyPruneInfo", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyPruneInfo)(pruneInfo_t info) = dlsym(RTLD_NEXT, "cusparseDestroyPruneInfo");
	returnVal = real_cusparseDestroyPruneInfo( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSaxpyi(cusparseHandle_t handle, int nnz, const float* alpha, const float* xVal, const int* xInd, float* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSaxpyi", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSaxpyi)(cusparseHandle_t handle, int nnz, const float* alpha, const float* xVal, const int* xInd, float* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseSaxpyi");
	returnVal = real_cusparseSaxpyi( handle, nnz, alpha, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDaxpyi(cusparseHandle_t handle, int nnz, const double* alpha, const double* xVal, const int* xInd, double* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDaxpyi", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDaxpyi)(cusparseHandle_t handle, int nnz, const double* alpha, const double* xVal, const int* xInd, double* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseDaxpyi");
	returnVal = real_cusparseDaxpyi( handle, nnz, alpha, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCaxpyi(cusparseHandle_t handle, int nnz, const cuComplex* alpha, const cuComplex* xVal, const int* xInd, cuComplex* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCaxpyi", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCaxpyi)(cusparseHandle_t handle, int nnz, const cuComplex* alpha, const cuComplex* xVal, const int* xInd, cuComplex* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseCaxpyi");
	returnVal = real_cusparseCaxpyi( handle, nnz, alpha, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZaxpyi(cusparseHandle_t handle, int nnz, const cuDoubleComplex* alpha, const cuDoubleComplex* xVal, const int* xInd, cuDoubleComplex* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZaxpyi", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseZaxpyi)(cusparseHandle_t handle, int nnz, const cuDoubleComplex* alpha, const cuDoubleComplex* xVal, const int* xInd, cuDoubleComplex* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseZaxpyi");
	returnVal = real_cusparseZaxpyi( handle, nnz, alpha, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSgthr(cusparseHandle_t handle, int nnz, const float* y, float* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgthr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSgthr)(cusparseHandle_t handle, int nnz, const float* y, float* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseSgthr");
	returnVal = real_cusparseSgthr( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDgthr(cusparseHandle_t handle, int nnz, const double* y, double* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgthr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDgthr)(cusparseHandle_t handle, int nnz, const double* y, double* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseDgthr");
	returnVal = real_cusparseDgthr( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCgthr(cusparseHandle_t handle, int nnz, const cuComplex* y, cuComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgthr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCgthr)(cusparseHandle_t handle, int nnz, const cuComplex* y, cuComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseCgthr");
	returnVal = real_cusparseCgthr( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZgthr(cusparseHandle_t handle, int nnz, const cuDoubleComplex* y, cuDoubleComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgthr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseZgthr)(cusparseHandle_t handle, int nnz, const cuDoubleComplex* y, cuDoubleComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseZgthr");
	returnVal = real_cusparseZgthr( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSgthrz(cusparseHandle_t handle, int nnz, float* y, float* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgthrz", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSgthrz)(cusparseHandle_t handle, int nnz, float* y, float* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseSgthrz");
	returnVal = real_cusparseSgthrz( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDgthrz(cusparseHandle_t handle, int nnz, double* y, double* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgthrz", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDgthrz)(cusparseHandle_t handle, int nnz, double* y, double* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseDgthrz");
	returnVal = real_cusparseDgthrz( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCgthrz(cusparseHandle_t handle, int nnz, cuComplex* y, cuComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgthrz", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCgthrz)(cusparseHandle_t handle, int nnz, cuComplex* y, cuComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseCgthrz");
	returnVal = real_cusparseCgthrz( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZgthrz(cusparseHandle_t handle, int nnz, cuDoubleComplex* y, cuDoubleComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgthrz", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseZgthrz)(cusparseHandle_t handle, int nnz, cuDoubleComplex* y, cuDoubleComplex* xVal, const int* xInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseZgthrz");
	returnVal = real_cusparseZgthrz( handle, nnz, y, xVal, xInd, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSsctr(cusparseHandle_t handle, int nnz, const float* xVal, const int* xInd, float* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSsctr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSsctr)(cusparseHandle_t handle, int nnz, const float* xVal, const int* xInd, float* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseSsctr");
	returnVal = real_cusparseSsctr( handle, nnz, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDsctr(cusparseHandle_t handle, int nnz, const double* xVal, const int* xInd, double* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDsctr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDsctr)(cusparseHandle_t handle, int nnz, const double* xVal, const int* xInd, double* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseDsctr");
	returnVal = real_cusparseDsctr( handle, nnz, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsctr(cusparseHandle_t handle, int nnz, const cuComplex* xVal, const int* xInd, cuComplex* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsctr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCsctr)(cusparseHandle_t handle, int nnz, const cuComplex* xVal, const int* xInd, cuComplex* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseCsctr");
	returnVal = real_cusparseCsctr( handle, nnz, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZsctr(cusparseHandle_t handle, int nnz, const cuDoubleComplex* xVal, const int* xInd, cuDoubleComplex* y, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZsctr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseZsctr)(cusparseHandle_t handle, int nnz, const cuDoubleComplex* xVal, const int* xInd, cuDoubleComplex* y, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseZsctr");
	returnVal = real_cusparseZsctr( handle, nnz, xVal, xInd, y, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSroti(cusparseHandle_t handle, int nnz, float* xVal, const int* xInd, float* y, const float* c, const float* s, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSroti", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSroti)(cusparseHandle_t handle, int nnz, float* xVal, const int* xInd, float* y, const float* c, const float* s, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseSroti");
	returnVal = real_cusparseSroti( handle, nnz, xVal, xInd, y, c, s, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDroti(cusparseHandle_t handle, int nnz, double* xVal, const int* xInd, double* y, const double* c, const double* s, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDroti", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDroti)(cusparseHandle_t handle, int nnz, double* xVal, const int* xInd, double* y, const double* c, const double* s, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseDroti");
	returnVal = real_cusparseDroti( handle, nnz, xVal, xInd, y, c, s, idxBase);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSgemvi(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const float* alpha, const float* A, int lda, int nnz, const float* xVal, const int* xInd, const float* beta, float* y, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgemvi", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSgemvi)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const float* alpha, const float* A, int lda, int nnz, const float* xVal, const int* xInd, const float* beta, float* y, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgemvi");
	returnVal = real_cusparseSgemvi( handle, transA, m, n, alpha, A, lda, nnz, xVal, xInd, beta, y, idxBase, pBuffer);
	armpl_logging_leave(&logger, m, n, lda, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSgemvi_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgemvi_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgemvi_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSgemvi_bufferSize");
	returnVal = real_cusparseSgemvi_bufferSize( handle, transA, m, n, nnz, pBufferSize);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDgemvi(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const double* alpha, const double* A, int lda, int nnz, const double* xVal, const int* xInd, const double* beta, double* y, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgemvi", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDgemvi)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const double* alpha, const double* A, int lda, int nnz, const double* xVal, const int* xInd, const double* beta, double* y, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgemvi");
	returnVal = real_cusparseDgemvi( handle, transA, m, n, alpha, A, lda, nnz, xVal, xInd, beta, y, idxBase, pBuffer);
	armpl_logging_leave(&logger, m, n, lda, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDgemvi_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgemvi_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgemvi_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDgemvi_bufferSize");
	returnVal = real_cusparseDgemvi_bufferSize( handle, transA, m, n, nnz, pBufferSize);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCgemvi(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, int nnz, const cuComplex* xVal, const int* xInd, const cuComplex* beta, cuComplex* y, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgemvi", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCgemvi)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, int nnz, const cuComplex* xVal, const int* xInd, const cuComplex* beta, cuComplex* y, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgemvi");
	returnVal = real_cusparseCgemvi( handle, transA, m, n, alpha, A, lda, nnz, xVal, xInd, beta, y, idxBase, pBuffer);
	armpl_logging_leave(&logger, m, n, lda, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCgemvi_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgemvi_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgemvi_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCgemvi_bufferSize");
	returnVal = real_cusparseCgemvi_bufferSize( handle, transA, m, n, nnz, pBufferSize);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZgemvi(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, int nnz, const cuDoubleComplex* xVal, const int* xInd, const cuDoubleComplex* beta, cuDoubleComplex* y, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgemvi", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZgemvi)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, int nnz, const cuDoubleComplex* xVal, const int* xInd, const cuDoubleComplex* beta, cuDoubleComplex* y, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgemvi");
	returnVal = real_cusparseZgemvi( handle, transA, m, n, alpha, A, lda, nnz, xVal, xInd, beta, y, idxBase, pBuffer);
	armpl_logging_leave(&logger, m, n, lda, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZgemvi_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgemvi_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgemvi_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int n, int nnz, int* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZgemvi_bufferSize");
	returnVal = real_cusparseZgemvi_bufferSize( handle, transA, m, n, nnz, pBufferSize);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsrmvEx_bufferSize(cusparseHandle_t handle, cusparseAlgMode_t alg, cusparseOperation_t transA, int m, int n, int nnz, const void* alpha, cudaDataType alphatype, const cusparseMatDescr_t descrA, const void* csrValA, cudaDataType csrValAtype, const int* csrRowPtrA, const int* csrColIndA, const void* x, cudaDataType xtype, const void* beta, cudaDataType betatype, void* y, cudaDataType ytype, cudaDataType executiontype, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsrmvEx_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCsrmvEx_bufferSize)(cusparseHandle_t handle, cusparseAlgMode_t alg, cusparseOperation_t transA, int m, int n, int nnz, const void* alpha, cudaDataType alphatype, const cusparseMatDescr_t descrA, const void* csrValA, cudaDataType csrValAtype, const int* csrRowPtrA, const int* csrColIndA, const void* x, cudaDataType xtype, const void* beta, cudaDataType betatype, void* y, cudaDataType ytype, cudaDataType executiontype, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCsrmvEx_bufferSize");
	returnVal = real_cusparseCsrmvEx_bufferSize( handle, alg, transA, m, n, nnz, alpha, alphatype, descrA, csrValA, csrValAtype, csrRowPtrA, csrColIndA, x, xtype, beta, betatype, y, ytype, executiontype, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsrmvEx(cusparseHandle_t handle, cusparseAlgMode_t alg, cusparseOperation_t transA, int m, int n, int nnz, const void* alpha, cudaDataType alphatype, const cusparseMatDescr_t descrA, const void* csrValA, cudaDataType csrValAtype, const int* csrRowPtrA, const int* csrColIndA, const void* x, cudaDataType xtype, const void* beta, cudaDataType betatype, void* y, cudaDataType ytype, cudaDataType executiontype, void* buffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsrmvEx", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCsrmvEx)(cusparseHandle_t handle, cusparseAlgMode_t alg, cusparseOperation_t transA, int m, int n, int nnz, const void* alpha, cudaDataType alphatype, const cusparseMatDescr_t descrA, const void* csrValA, cudaDataType csrValAtype, const int* csrRowPtrA, const int* csrColIndA, const void* x, cudaDataType xtype, const void* beta, cudaDataType betatype, void* y, cudaDataType ytype, cudaDataType executiontype, void* buffer) = dlsym(RTLD_NEXT, "cusparseCsrmvEx");
	returnVal = real_cusparseCsrmvEx( handle, alg, transA, m, n, nnz, alpha, alphatype, descrA, csrValA, csrValAtype, csrRowPtrA, csrColIndA, x, xtype, beta, betatype, y, ytype, executiontype, buffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSbsrmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const float* x, const float* beta, float* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const float* x, const float* beta, float* y) = dlsym(RTLD_NEXT, "cusparseSbsrmv");
	returnVal = real_cusparseSbsrmv( handle, dirA, transA, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const double* x, const double* beta, double* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const double* x, const double* beta, double* y) = dlsym(RTLD_NEXT, "cusparseDbsrmv");
	returnVal = real_cusparseDbsrmv( handle, dirA, transA, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cuComplex* x, const cuComplex* beta, cuComplex* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cuComplex* x, const cuComplex* beta, cuComplex* y) = dlsym(RTLD_NEXT, "cusparseCbsrmv");
	returnVal = real_cusparseCbsrmv( handle, dirA, transA, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cuDoubleComplex* x, const cuDoubleComplex* beta, cuDoubleComplex* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cuDoubleComplex* x, const cuDoubleComplex* beta, cuDoubleComplex* y) = dlsym(RTLD_NEXT, "cusparseZbsrmv");
	returnVal = real_cusparseZbsrmv( handle, dirA, transA, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrxmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const float* x, const float* beta, float* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrxmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrxmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const float* x, const float* beta, float* y) = dlsym(RTLD_NEXT, "cusparseSbsrxmv");
	returnVal = real_cusparseSbsrxmv( handle, dirA, transA, sizeOfMask, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedMaskPtrA, bsrSortedRowPtrA, bsrSortedEndPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrxmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const double* x, const double* beta, double* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrxmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrxmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const double* x, const double* beta, double* y) = dlsym(RTLD_NEXT, "cusparseDbsrxmv");
	returnVal = real_cusparseDbsrxmv( handle, dirA, transA, sizeOfMask, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedMaskPtrA, bsrSortedRowPtrA, bsrSortedEndPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrxmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const cuComplex* x, const cuComplex* beta, cuComplex* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrxmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrxmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const cuComplex* x, const cuComplex* beta, cuComplex* y) = dlsym(RTLD_NEXT, "cusparseCbsrxmv");
	returnVal = real_cusparseCbsrxmv( handle, dirA, transA, sizeOfMask, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedMaskPtrA, bsrSortedRowPtrA, bsrSortedEndPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrxmv(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const cuDoubleComplex* x, const cuDoubleComplex* beta, cuDoubleComplex* y)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrxmv", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrxmv)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int sizeOfMask, int mb, int nb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedMaskPtrA, const int* bsrSortedRowPtrA, const int* bsrSortedEndPtrA, const int* bsrSortedColIndA, int blockDim, const cuDoubleComplex* x, const cuDoubleComplex* beta, cuDoubleComplex* y) = dlsym(RTLD_NEXT, "cusparseZbsrxmv");
	returnVal = real_cusparseZbsrxmv( handle, dirA, transA, sizeOfMask, mb, nb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedMaskPtrA, bsrSortedRowPtrA, bsrSortedEndPtrA, bsrSortedColIndA, blockDim, x, beta, y);
	armpl_logging_leave(&logger, nnzb, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseXcsrsv2_zeroPivot(cusparseHandle_t handle, csrsv2Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrsv2_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrsv2_zeroPivot)(cusparseHandle_t handle, csrsv2Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXcsrsv2_zeroPivot");
	returnVal = real_cusparseXcsrsv2_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScsrsv2_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsv2_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsv2_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsrsv2_bufferSize");
	returnVal = real_cusparseScsrsv2_bufferSize( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsv2_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsv2_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsv2_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsrsv2_bufferSize");
	returnVal = real_cusparseDcsrsv2_bufferSize( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsv2_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsv2_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsv2_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsrsv2_bufferSize");
	returnVal = real_cusparseCcsrsv2_bufferSize( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsv2_bufferSize(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsv2_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsv2_bufferSize)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsrsv2_bufferSize");
	returnVal = real_cusparseZcsrsv2_bufferSize( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsv2_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseScsrsv2_bufferSizeExt");
	returnVal = real_cusparseScsrsv2_bufferSizeExt( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsv2_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDcsrsv2_bufferSizeExt");
	returnVal = real_cusparseDcsrsv2_bufferSizeExt( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsv2_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCcsrsv2_bufferSizeExt");
	returnVal = real_cusparseCcsrsv2_bufferSizeExt( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsv2_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZcsrsv2_bufferSizeExt");
	returnVal = real_cusparseZcsrsv2_bufferSizeExt( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrsv2_analysis(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsv2_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsv2_analysis)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrsv2_analysis");
	returnVal = real_cusparseScsrsv2_analysis( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsv2_analysis(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsv2_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsv2_analysis)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrsv2_analysis");
	returnVal = real_cusparseDcsrsv2_analysis( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsv2_analysis(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsv2_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsv2_analysis)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrsv2_analysis");
	returnVal = real_cusparseCcsrsv2_analysis( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsv2_analysis(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsv2_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsv2_analysis)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrsv2_analysis");
	returnVal = real_cusparseZcsrsv2_analysis( handle, transA, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrsv2_solve(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const float* f, float* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsv2_solve", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsv2_solve)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const float* f, float* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrsv2_solve");
	returnVal = real_cusparseScsrsv2_solve( handle, transA, m, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsv2_solve(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const double* f, double* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsv2_solve", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsv2_solve)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const double* f, double* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrsv2_solve");
	returnVal = real_cusparseDcsrsv2_solve( handle, transA, m, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsv2_solve(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const cuComplex* f, cuComplex* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsv2_solve", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsv2_solve)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const cuComplex* f, cuComplex* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrsv2_solve");
	returnVal = real_cusparseCcsrsv2_solve( handle, transA, m, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsv2_solve(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const cuDoubleComplex* f, cuDoubleComplex* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsv2_solve", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsv2_solve)(cusparseHandle_t handle, cusparseOperation_t transA, int m, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrsv2Info_t info, const cuDoubleComplex* f, cuDoubleComplex* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrsv2_solve");
	returnVal = real_cusparseZcsrsv2_solve( handle, transA, m, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXbsrsv2_zeroPivot(cusparseHandle_t handle, bsrsv2Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXbsrsv2_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXbsrsv2_zeroPivot)(cusparseHandle_t handle, bsrsv2Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXbsrsv2_zeroPivot");
	returnVal = real_cusparseXbsrsv2_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsv2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsv2_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsv2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSbsrsv2_bufferSize");
	returnVal = real_cusparseSbsrsv2_bufferSize( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsv2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsv2_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsv2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDbsrsv2_bufferSize");
	returnVal = real_cusparseDbsrsv2_bufferSize( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsv2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsv2_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsv2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCbsrsv2_bufferSize");
	returnVal = real_cusparseCbsrsv2_bufferSize( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsv2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsv2_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsv2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZbsrsv2_bufferSize");
	returnVal = real_cusparseZbsrsv2_bufferSize( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSbsrsv2_bufferSizeExt");
	returnVal = real_cusparseSbsrsv2_bufferSizeExt( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDbsrsv2_bufferSizeExt");
	returnVal = real_cusparseDbsrsv2_bufferSizeExt( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCbsrsv2_bufferSizeExt");
	returnVal = real_cusparseCbsrsv2_bufferSizeExt( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsv2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsv2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockSize, bsrsv2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZbsrsv2_bufferSizeExt");
	returnVal = real_cusparseZbsrsv2_bufferSizeExt( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsv2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsv2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsv2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrsv2_analysis");
	returnVal = real_cusparseSbsrsv2_analysis( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsv2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsv2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsv2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrsv2_analysis");
	returnVal = real_cusparseDbsrsv2_analysis( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsv2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsv2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsv2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrsv2_analysis");
	returnVal = real_cusparseCbsrsv2_analysis( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsv2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsv2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsv2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrsv2_analysis");
	returnVal = real_cusparseZbsrsv2_analysis( handle, dirA, transA, mb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsv2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const float* f, float* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsv2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsv2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const float* f, float* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrsv2_solve");
	returnVal = real_cusparseSbsrsv2_solve( handle, dirA, transA, mb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsv2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const double* f, double* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsv2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsv2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const double* f, double* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrsv2_solve");
	returnVal = real_cusparseDbsrsv2_solve( handle, dirA, transA, mb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsv2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const cuComplex* f, cuComplex* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsv2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsv2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const cuComplex* f, cuComplex* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrsv2_solve");
	returnVal = real_cusparseCbsrsv2_solve( handle, dirA, transA, mb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsv2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const cuDoubleComplex* f, cuDoubleComplex* x, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsv2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsv2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, int mb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, bsrsv2Info_t info, const cuDoubleComplex* f, cuDoubleComplex* x, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrsv2_solve");
	returnVal = real_cusparseZbsrsv2_solve( handle, dirA, transA, mb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, info, f, x, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrmm(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const float* B, const int ldb, const float* beta, float* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrmm", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrmm)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const float* B, const int ldb, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cusparseSbsrmm");
	returnVal = real_cusparseSbsrmm( handle, dirA, transA, transB, mb, n, kb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, ldb, ldc, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrmm(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const double* B, const int ldb, const double* beta, double* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrmm", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrmm)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const double* B, const int ldb, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cusparseDbsrmm");
	returnVal = real_cusparseDbsrmm( handle, dirA, transA, transB, mb, n, kb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, ldb, ldc, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrmm(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const cuComplex* B, const int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrmm", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrmm)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const cuComplex* B, const int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cusparseCbsrmm");
	returnVal = real_cusparseCbsrmm( handle, dirA, transA, transB, mb, n, kb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, ldb, ldc, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrmm(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const cuDoubleComplex* B, const int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrmm", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrmm)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int kb, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, const int blockSize, const cuDoubleComplex* B, const int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cusparseZbsrmm");
	returnVal = real_cusparseZbsrmm( handle, dirA, transA, transB, mb, n, kb, nnzb, alpha, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockSize, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, ldb, ldc, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSgemmi(cusparseHandle_t handle, int m, int n, int k, int nnz, const float* alpha, const float* A, int lda, const float* cscValB, const int* cscColPtrB, const int* cscRowIndB, const float* beta, float* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgemmi", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseSgemmi)(cusparseHandle_t handle, int m, int n, int k, int nnz, const float* alpha, const float* A, int lda, const float* cscValB, const int* cscColPtrB, const int* cscRowIndB, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cusparseSgemmi");
	returnVal = real_cusparseSgemmi( handle, m, n, k, nnz, alpha, A, lda, cscValB, cscColPtrB, cscRowIndB, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldc, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDgemmi(cusparseHandle_t handle, int m, int n, int k, int nnz, const double* alpha, const double* A, int lda, const double* cscValB, const int* cscColPtrB, const int* cscRowIndB, const double* beta, double* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgemmi", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseDgemmi)(cusparseHandle_t handle, int m, int n, int k, int nnz, const double* alpha, const double* A, int lda, const double* cscValB, const int* cscColPtrB, const int* cscRowIndB, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cusparseDgemmi");
	returnVal = real_cusparseDgemmi( handle, m, n, k, nnz, alpha, A, lda, cscValB, cscColPtrB, cscRowIndB, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldc, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCgemmi(cusparseHandle_t handle, int m, int n, int k, int nnz, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* cscValB, const int* cscColPtrB, const int* cscRowIndB, const cuComplex* beta, cuComplex* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgemmi", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseCgemmi)(cusparseHandle_t handle, int m, int n, int k, int nnz, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* cscValB, const int* cscColPtrB, const int* cscRowIndB, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cusparseCgemmi");
	returnVal = real_cusparseCgemmi( handle, m, n, k, nnz, alpha, A, lda, cscValB, cscColPtrB, cscRowIndB, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldc, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZgemmi(cusparseHandle_t handle, int m, int n, int k, int nnz, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* cscValB, const int* cscColPtrB, const int* cscRowIndB, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgemmi", 0, 6, 0, 0);
	cusparseStatus_t (*real_cusparseZgemmi)(cusparseHandle_t handle, int m, int n, int k, int nnz, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* cscValB, const int* cscColPtrB, const int* cscRowIndB, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cusparseZgemmi");
	returnVal = real_cusparseZgemmi( handle, m, n, k, nnz, alpha, A, lda, cscValB, cscColPtrB, cscRowIndB, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldc, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsrsm2Info(csrsm2Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsrsm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsrsm2Info)(csrsm2Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsrsm2Info");
	returnVal = real_cusparseCreateCsrsm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsrsm2Info(csrsm2Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsrsm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsrsm2Info)(csrsm2Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsrsm2Info");
	returnVal = real_cusparseDestroyCsrsm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseXcsrsm2_zeroPivot(cusparseHandle_t handle, csrsm2Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrsm2_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrsm2_zeroPivot)(cusparseHandle_t handle, csrsm2Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXcsrsm2_zeroPivot");
	returnVal = real_cusparseXcsrsm2_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScsrsm2_bufferSizeExt(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsm2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsm2_bufferSizeExt)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseScsrsm2_bufferSizeExt");
	returnVal = real_cusparseScsrsm2_bufferSizeExt( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBufferSize);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsm2_bufferSizeExt(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsm2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsm2_bufferSizeExt)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDcsrsm2_bufferSizeExt");
	returnVal = real_cusparseDcsrsm2_bufferSizeExt( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBufferSize);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsm2_bufferSizeExt(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsm2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsm2_bufferSizeExt)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCcsrsm2_bufferSizeExt");
	returnVal = real_cusparseCcsrsm2_bufferSizeExt( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBufferSize);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsm2_bufferSizeExt(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsm2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsm2_bufferSizeExt)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZcsrsm2_bufferSizeExt");
	returnVal = real_cusparseZcsrsm2_bufferSizeExt( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBufferSize);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrsm2_analysis(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsm2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsm2_analysis)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrsm2_analysis");
	returnVal = real_cusparseScsrsm2_analysis( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsm2_analysis(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsm2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsm2_analysis)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrsm2_analysis");
	returnVal = real_cusparseDcsrsm2_analysis( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsm2_analysis(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsm2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsm2_analysis)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrsm2_analysis");
	returnVal = real_cusparseCcsrsm2_analysis( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsm2_analysis(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsm2_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsm2_analysis)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrsm2_analysis");
	returnVal = real_cusparseZcsrsm2_analysis( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrsm2_solve(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrsm2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsrsm2_solve)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const float* alpha, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrsm2_solve");
	returnVal = real_cusparseScsrsm2_solve( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrsm2_solve(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrsm2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrsm2_solve)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const double* alpha, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, double* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrsm2_solve");
	returnVal = real_cusparseDcsrsm2_solve( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrsm2_solve(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrsm2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrsm2_solve)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrsm2_solve");
	returnVal = real_cusparseCcsrsm2_solve( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrsm2_solve(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrsm2_solve", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrsm2_solve)(cusparseHandle_t handle, int algo, cusparseOperation_t transA, cusparseOperation_t transB, int m, int nrhs, int nnz, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuDoubleComplex* B, int ldb, csrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrsm2_solve");
	returnVal = real_cusparseZcsrsm2_solve( handle, algo, transA, transB, m, nrhs, nnz, alpha, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, B, ldb, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, ldb, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXbsrsm2_zeroPivot(cusparseHandle_t handle, bsrsm2Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXbsrsm2_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXbsrsm2_zeroPivot)(cusparseHandle_t handle, bsrsm2Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXbsrsm2_zeroPivot");
	returnVal = real_cusparseXbsrsm2_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsm2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsm2_bufferSize", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsm2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSbsrsm2_bufferSize");
	returnVal = real_cusparseSbsrsm2_bufferSize( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsm2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsm2_bufferSize", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsm2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDbsrsm2_bufferSize");
	returnVal = real_cusparseDbsrsm2_bufferSize( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsm2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsm2_bufferSize", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsm2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCbsrsm2_bufferSize");
	returnVal = real_cusparseCbsrsm2_bufferSize( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsm2_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsm2_bufferSize", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsm2_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZbsrsm2_bufferSize");
	returnVal = real_cusparseZbsrsm2_bufferSize( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsm2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsm2_bufferSizeExt", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsm2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSbsrsm2_bufferSizeExt");
	returnVal = real_cusparseSbsrsm2_bufferSizeExt( handle, dirA, transA, transB, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsm2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsm2_bufferSizeExt", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsm2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDbsrsm2_bufferSizeExt");
	returnVal = real_cusparseDbsrsm2_bufferSizeExt( handle, dirA, transA, transB, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsm2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsm2_bufferSizeExt", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsm2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCbsrsm2_bufferSizeExt");
	returnVal = real_cusparseCbsrsm2_bufferSizeExt( handle, dirA, transA, transB, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsm2_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsm2_bufferSizeExt", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsm2_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transB, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZbsrsm2_bufferSizeExt");
	returnVal = real_cusparseZbsrsm2_bufferSizeExt( handle, dirA, transA, transB, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsm2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsm2_analysis", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsm2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrsm2_analysis");
	returnVal = real_cusparseSbsrsm2_analysis( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, policy, pBuffer);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsm2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsm2_analysis", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsm2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrsm2_analysis");
	returnVal = real_cusparseDbsrsm2_analysis( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, policy, pBuffer);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsm2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsm2_analysis", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsm2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrsm2_analysis");
	returnVal = real_cusparseCbsrsm2_analysis( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, policy, pBuffer);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsm2_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsm2_analysis", 0, 4, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsm2_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrsm2_analysis");
	returnVal = real_cusparseZbsrsm2_analysis( handle, dirA, transA, transXY, mb, n, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, policy, pBuffer);
	armpl_logging_leave(&logger, n, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsrsm2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const float* B, int ldb, float* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrsm2_solve", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrsm2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const float* alpha, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const float* B, int ldb, float* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrsm2_solve");
	returnVal = real_cusparseSbsrsm2_solve( handle, dirA, transA, transXY, mb, n, nnzb, alpha, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, B, ldb, X, ldx, policy, pBuffer);
	armpl_logging_leave(&logger, n, ldb, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrsm2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const double* B, int ldb, double* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrsm2_solve", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrsm2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const double* alpha, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const double* B, int ldb, double* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrsm2_solve");
	returnVal = real_cusparseDbsrsm2_solve( handle, dirA, transA, transXY, mb, n, nnzb, alpha, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, B, ldb, X, ldx, policy, pBuffer);
	armpl_logging_leave(&logger, n, ldb, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrsm2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const cuComplex* B, int ldb, cuComplex* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrsm2_solve", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrsm2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cuComplex* alpha, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const cuComplex* B, int ldb, cuComplex* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrsm2_solve");
	returnVal = real_cusparseCbsrsm2_solve( handle, dirA, transA, transXY, mb, n, nnzb, alpha, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, B, ldb, X, ldx, policy, pBuffer);
	armpl_logging_leave(&logger, n, ldb, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrsm2_solve(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const cuDoubleComplex* B, int ldb, cuDoubleComplex* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrsm2_solve", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrsm2_solve)(cusparseHandle_t handle, cusparseDirection_t dirA, cusparseOperation_t transA, cusparseOperation_t transXY, int mb, int n, int nnzb, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrsm2Info_t info, const cuDoubleComplex* B, int ldb, cuDoubleComplex* X, int ldx, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrsm2_solve");
	returnVal = real_cusparseZbsrsm2_solve( handle, dirA, transA, transXY, mb, n, nnzb, alpha, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, B, ldb, X, ldx, policy, pBuffer);
	armpl_logging_leave(&logger, n, ldb, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseScsrilu02_numericBoost(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, float* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseScsrilu02_numericBoost)(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, float* boost_val) = dlsym(RTLD_NEXT, "cusparseScsrilu02_numericBoost");
	returnVal = real_cusparseScsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDcsrilu02_numericBoost(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, double* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrilu02_numericBoost)(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, double* boost_val) = dlsym(RTLD_NEXT, "cusparseDcsrilu02_numericBoost");
	returnVal = real_cusparseDcsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCcsrilu02_numericBoost(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, cuComplex* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrilu02_numericBoost)(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, cuComplex* boost_val) = dlsym(RTLD_NEXT, "cusparseCcsrilu02_numericBoost");
	returnVal = real_cusparseCcsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseZcsrilu02_numericBoost(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, cuDoubleComplex* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrilu02_numericBoost)(cusparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, cuDoubleComplex* boost_val) = dlsym(RTLD_NEXT, "cusparseZcsrilu02_numericBoost");
	returnVal = real_cusparseZcsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseXcsrilu02_zeroPivot(cusparseHandle_t handle, csrilu02Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrilu02_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrilu02_zeroPivot)(cusparseHandle_t handle, csrilu02Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXcsrilu02_zeroPivot");
	returnVal = real_cusparseXcsrilu02_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScsrilu02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrilu02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrilu02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsrilu02_bufferSize");
	returnVal = real_cusparseScsrilu02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrilu02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrilu02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrilu02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsrilu02_bufferSize");
	returnVal = real_cusparseDcsrilu02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrilu02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrilu02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrilu02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsrilu02_bufferSize");
	returnVal = real_cusparseCcsrilu02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrilu02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrilu02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrilu02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsrilu02_bufferSize");
	returnVal = real_cusparseZcsrilu02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrilu02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrilu02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrilu02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseScsrilu02_bufferSizeExt");
	returnVal = real_cusparseScsrilu02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrilu02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrilu02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrilu02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDcsrilu02_bufferSizeExt");
	returnVal = real_cusparseDcsrilu02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrilu02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrilu02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrilu02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCcsrilu02_bufferSizeExt");
	returnVal = real_cusparseCcsrilu02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrilu02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrilu02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrilu02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZcsrilu02_bufferSizeExt");
	returnVal = real_cusparseZcsrilu02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrilu02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrilu02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrilu02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrilu02_analysis");
	returnVal = real_cusparseScsrilu02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrilu02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrilu02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrilu02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrilu02_analysis");
	returnVal = real_cusparseDcsrilu02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrilu02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrilu02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrilu02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrilu02_analysis");
	returnVal = real_cusparseCcsrilu02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrilu02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrilu02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrilu02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrilu02_analysis");
	returnVal = real_cusparseZcsrilu02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsrilu02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrilu02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrilu02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrilu02");
	returnVal = real_cusparseScsrilu02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrilu02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrilu02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrilu02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrilu02");
	returnVal = real_cusparseDcsrilu02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrilu02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrilu02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrilu02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrilu02");
	returnVal = real_cusparseCcsrilu02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrilu02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrilu02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrilu02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrilu02");
	returnVal = real_cusparseZcsrilu02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSbsrilu02_numericBoost(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, float* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrilu02_numericBoost)(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, float* boost_val) = dlsym(RTLD_NEXT, "cusparseSbsrilu02_numericBoost");
	returnVal = real_cusparseSbsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDbsrilu02_numericBoost(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, double* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrilu02_numericBoost)(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, double* boost_val) = dlsym(RTLD_NEXT, "cusparseDbsrilu02_numericBoost");
	returnVal = real_cusparseDbsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCbsrilu02_numericBoost(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, cuComplex* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrilu02_numericBoost)(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, cuComplex* boost_val) = dlsym(RTLD_NEXT, "cusparseCbsrilu02_numericBoost");
	returnVal = real_cusparseCbsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseZbsrilu02_numericBoost(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, cuDoubleComplex* boost_val)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrilu02_numericBoost", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrilu02_numericBoost)(cusparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, cuDoubleComplex* boost_val) = dlsym(RTLD_NEXT, "cusparseZbsrilu02_numericBoost");
	returnVal = real_cusparseZbsrilu02_numericBoost( handle, info, enable_boost, tol, boost_val);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseXbsrilu02_zeroPivot(cusparseHandle_t handle, bsrilu02Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXbsrilu02_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXbsrilu02_zeroPivot)(cusparseHandle_t handle, bsrilu02Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXbsrilu02_zeroPivot");
	returnVal = real_cusparseXbsrilu02_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSbsrilu02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrilu02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrilu02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSbsrilu02_bufferSize");
	returnVal = real_cusparseSbsrilu02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrilu02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrilu02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrilu02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDbsrilu02_bufferSize");
	returnVal = real_cusparseDbsrilu02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrilu02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrilu02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrilu02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCbsrilu02_bufferSize");
	returnVal = real_cusparseCbsrilu02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrilu02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrilu02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrilu02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZbsrilu02_bufferSize");
	returnVal = real_cusparseZbsrilu02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrilu02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrilu02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrilu02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSbsrilu02_bufferSizeExt");
	returnVal = real_cusparseSbsrilu02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsrilu02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrilu02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrilu02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDbsrilu02_bufferSizeExt");
	returnVal = real_cusparseDbsrilu02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsrilu02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrilu02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrilu02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCbsrilu02_bufferSizeExt");
	returnVal = real_cusparseCbsrilu02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsrilu02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrilu02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrilu02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsrilu02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZbsrilu02_bufferSizeExt");
	returnVal = real_cusparseZbsrilu02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsrilu02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrilu02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrilu02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrilu02_analysis");
	returnVal = real_cusparseSbsrilu02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrilu02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrilu02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrilu02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrilu02_analysis");
	returnVal = real_cusparseDbsrilu02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrilu02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrilu02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrilu02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrilu02_analysis");
	returnVal = real_cusparseCbsrilu02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrilu02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrilu02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrilu02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrilu02_analysis");
	returnVal = real_cusparseZbsrilu02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsrilu02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsrilu02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsrilu02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsrilu02");
	returnVal = real_cusparseSbsrilu02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsrilu02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsrilu02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsrilu02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsrilu02");
	returnVal = real_cusparseDbsrilu02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsrilu02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsrilu02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsrilu02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsrilu02");
	returnVal = real_cusparseCbsrilu02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsrilu02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsrilu02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsrilu02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsrilu02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsrilu02");
	returnVal = real_cusparseZbsrilu02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseXcsric02_zeroPivot(cusparseHandle_t handle, csric02Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsric02_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXcsric02_zeroPivot)(cusparseHandle_t handle, csric02Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXcsric02_zeroPivot");
	returnVal = real_cusparseXcsric02_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScsric02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsric02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsric02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsric02_bufferSize");
	returnVal = real_cusparseScsric02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsric02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsric02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsric02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsric02_bufferSize");
	returnVal = real_cusparseDcsric02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsric02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsric02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsric02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsric02_bufferSize");
	returnVal = real_cusparseCcsric02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsric02_bufferSize(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsric02_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsric02_bufferSize)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsric02_bufferSize");
	returnVal = real_cusparseZcsric02_bufferSize( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsric02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsric02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsric02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseScsric02_bufferSizeExt");
	returnVal = real_cusparseScsric02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsric02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsric02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsric02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDcsric02_bufferSizeExt");
	returnVal = real_cusparseDcsric02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsric02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsric02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsric02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCcsric02_bufferSizeExt");
	returnVal = real_cusparseCcsric02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsric02_bufferSizeExt(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsric02_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsric02_bufferSizeExt)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedVal, const int* csrSortedRowPtr, const int* csrSortedColInd, csric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZcsric02_bufferSizeExt");
	returnVal = real_cusparseZcsric02_bufferSizeExt( handle, m, nnz, descrA, csrSortedVal, csrSortedRowPtr, csrSortedColInd, info, pBufferSize);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsric02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsric02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsric02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsric02_analysis");
	returnVal = real_cusparseScsric02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsric02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsric02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsric02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsric02_analysis");
	returnVal = real_cusparseDcsric02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsric02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsric02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsric02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsric02_analysis");
	returnVal = real_cusparseCcsric02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsric02_analysis(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsric02_analysis", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsric02_analysis)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsric02_analysis");
	returnVal = real_cusparseZcsric02_analysis( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsric02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsric02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsric02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, float* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsric02");
	returnVal = real_cusparseScsric02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsric02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsric02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsric02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, double* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsric02");
	returnVal = real_cusparseDcsric02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsric02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsric02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsric02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsric02");
	returnVal = real_cusparseCcsric02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsric02(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsric02", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsric02)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrSortedValA_valM, const int* csrSortedRowPtrA, const int* csrSortedColIndA, csric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsric02");
	returnVal = real_cusparseZcsric02( handle, m, nnz, descrA, csrSortedValA_valM, csrSortedRowPtrA, csrSortedColIndA, info, policy, pBuffer);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXbsric02_zeroPivot(cusparseHandle_t handle, bsric02Info_t info, int* position)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXbsric02_zeroPivot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseXbsric02_zeroPivot)(cusparseHandle_t handle, bsric02Info_t info, int* position) = dlsym(RTLD_NEXT, "cusparseXbsric02_zeroPivot");
	returnVal = real_cusparseXbsric02_zeroPivot( handle, info, position);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSbsric02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsric02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsric02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSbsric02_bufferSize");
	returnVal = real_cusparseSbsric02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsric02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsric02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsric02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDbsric02_bufferSize");
	returnVal = real_cusparseDbsric02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsric02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsric02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsric02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCbsric02_bufferSize");
	returnVal = real_cusparseCbsric02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsric02_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsric02_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsric02_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZbsric02_bufferSize");
	returnVal = real_cusparseZbsric02_bufferSize( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsric02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsric02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsric02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSbsric02_bufferSizeExt");
	returnVal = real_cusparseSbsric02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseDbsric02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsric02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsric02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDbsric02_bufferSizeExt");
	returnVal = real_cusparseDbsric02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseCbsric02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsric02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsric02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCbsric02_bufferSizeExt");
	returnVal = real_cusparseCbsric02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseZbsric02_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsric02_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsric02_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockSize, bsric02Info_t info, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZbsric02_bufferSizeExt");
	returnVal = real_cusparseZbsric02_bufferSizeExt( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockSize, info, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, blockSize);
	return returnVal;
}
cusparseStatus_t cusparseSbsric02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsric02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsric02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer) = dlsym(RTLD_NEXT, "cusparseSbsric02_analysis");
	returnVal = real_cusparseSbsric02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pInputBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsric02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsric02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsric02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer) = dlsym(RTLD_NEXT, "cusparseDbsric02_analysis");
	returnVal = real_cusparseDbsric02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pInputBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsric02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsric02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsric02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer) = dlsym(RTLD_NEXT, "cusparseCbsric02_analysis");
	returnVal = real_cusparseCbsric02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pInputBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsric02_analysis(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsric02_analysis", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsric02_analysis)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pInputBuffer) = dlsym(RTLD_NEXT, "cusparseZbsric02_analysis");
	returnVal = real_cusparseZbsric02_analysis( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pInputBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsric02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsric02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsric02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSbsric02");
	returnVal = real_cusparseSbsric02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsric02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsric02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsric02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDbsric02");
	returnVal = real_cusparseDbsric02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsric02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsric02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsric02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCbsric02");
	returnVal = real_cusparseCbsric02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsric02(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsric02", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsric02)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nnzb, const cusparseMatDescr_t descrA, cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int blockDim, bsric02Info_t info, cusparseSolvePolicy_t policy, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZbsric02");
	returnVal = real_cusparseZbsric02( handle, dirA, mb, nnzb, descrA, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, blockDim, info, policy, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, const float* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, const float* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgtsv2_bufferSizeExt");
	returnVal = real_cusparseSgtsv2_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, const double* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, const double* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgtsv2_bufferSizeExt");
	returnVal = real_cusparseDgtsv2_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgtsv2_bufferSizeExt");
	returnVal = real_cusparseCgtsv2_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgtsv2_bufferSizeExt");
	returnVal = real_cusparseZgtsv2_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, float* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2)(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, float* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgtsv2");
	returnVal = real_cusparseSgtsv2( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, double* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2)(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, double* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgtsv2");
	returnVal = real_cusparseDgtsv2( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2)(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgtsv2");
	returnVal = real_cusparseCgtsv2( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgtsv2");
	returnVal = real_cusparseZgtsv2( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2_nopivot_bufferSizeExt(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, const float* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2_nopivot_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2_nopivot_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, const float* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgtsv2_nopivot_bufferSizeExt");
	returnVal = real_cusparseSgtsv2_nopivot_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2_nopivot_bufferSizeExt(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, const double* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2_nopivot_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2_nopivot_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, const double* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgtsv2_nopivot_bufferSizeExt");
	returnVal = real_cusparseDgtsv2_nopivot_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2_nopivot_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2_nopivot_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2_nopivot_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgtsv2_nopivot_bufferSizeExt");
	returnVal = real_cusparseCgtsv2_nopivot_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2_nopivot_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* B, int ldb, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2_nopivot_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2_nopivot_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* B, int ldb, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgtsv2_nopivot_bufferSizeExt");
	returnVal = real_cusparseZgtsv2_nopivot_bufferSizeExt( handle, m, n, dl, d, du, B, ldb, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2_nopivot(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, float* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2_nopivot", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2_nopivot)(cusparseHandle_t handle, int m, int n, const float* dl, const float* d, const float* du, float* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgtsv2_nopivot");
	returnVal = real_cusparseSgtsv2_nopivot( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2_nopivot(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, double* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2_nopivot", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2_nopivot)(cusparseHandle_t handle, int m, int n, const double* dl, const double* d, const double* du, double* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgtsv2_nopivot");
	returnVal = real_cusparseDgtsv2_nopivot( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2_nopivot(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2_nopivot", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2_nopivot)(cusparseHandle_t handle, int m, int n, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgtsv2_nopivot");
	returnVal = real_cusparseCgtsv2_nopivot( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2_nopivot(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* B, int ldb, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2_nopivot", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2_nopivot)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* B, int ldb, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgtsv2_nopivot");
	returnVal = real_cusparseZgtsv2_nopivot( handle, m, n, dl, d, du, B, ldb, pBuffer);
	armpl_logging_leave(&logger, m, n, ldb);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2StridedBatch_bufferSizeExt(cusparseHandle_t handle, int m, const float* dl, const float* d, const float* du, const float* x, int batchCount, int batchStride, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2StridedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2StridedBatch_bufferSizeExt)(cusparseHandle_t handle, int m, const float* dl, const float* d, const float* du, const float* x, int batchCount, int batchStride, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgtsv2StridedBatch_bufferSizeExt");
	returnVal = real_cusparseSgtsv2StridedBatch_bufferSizeExt( handle, m, dl, d, du, x, batchCount, batchStride, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2StridedBatch_bufferSizeExt(cusparseHandle_t handle, int m, const double* dl, const double* d, const double* du, const double* x, int batchCount, int batchStride, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2StridedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2StridedBatch_bufferSizeExt)(cusparseHandle_t handle, int m, const double* dl, const double* d, const double* du, const double* x, int batchCount, int batchStride, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgtsv2StridedBatch_bufferSizeExt");
	returnVal = real_cusparseDgtsv2StridedBatch_bufferSizeExt( handle, m, dl, d, du, x, batchCount, batchStride, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2StridedBatch_bufferSizeExt(cusparseHandle_t handle, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* x, int batchCount, int batchStride, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2StridedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2StridedBatch_bufferSizeExt)(cusparseHandle_t handle, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* x, int batchCount, int batchStride, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgtsv2StridedBatch_bufferSizeExt");
	returnVal = real_cusparseCgtsv2StridedBatch_bufferSizeExt( handle, m, dl, d, du, x, batchCount, batchStride, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2StridedBatch_bufferSizeExt(cusparseHandle_t handle, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* x, int batchCount, int batchStride, size_t* bufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2StridedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2StridedBatch_bufferSizeExt)(cusparseHandle_t handle, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* x, int batchCount, int batchStride, size_t* bufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgtsv2StridedBatch_bufferSizeExt");
	returnVal = real_cusparseZgtsv2StridedBatch_bufferSizeExt( handle, m, dl, d, du, x, batchCount, batchStride, bufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSgtsv2StridedBatch(cusparseHandle_t handle, int m, const float* dl, const float* d, const float* du, float* x, int batchCount, int batchStride, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsv2StridedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsv2StridedBatch)(cusparseHandle_t handle, int m, const float* dl, const float* d, const float* du, float* x, int batchCount, int batchStride, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgtsv2StridedBatch");
	returnVal = real_cusparseSgtsv2StridedBatch( handle, m, dl, d, du, x, batchCount, batchStride, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgtsv2StridedBatch(cusparseHandle_t handle, int m, const double* dl, const double* d, const double* du, double* x, int batchCount, int batchStride, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsv2StridedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsv2StridedBatch)(cusparseHandle_t handle, int m, const double* dl, const double* d, const double* du, double* x, int batchCount, int batchStride, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgtsv2StridedBatch");
	returnVal = real_cusparseDgtsv2StridedBatch( handle, m, dl, d, du, x, batchCount, batchStride, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgtsv2StridedBatch(cusparseHandle_t handle, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* x, int batchCount, int batchStride, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsv2StridedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsv2StridedBatch)(cusparseHandle_t handle, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, cuComplex* x, int batchCount, int batchStride, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgtsv2StridedBatch");
	returnVal = real_cusparseCgtsv2StridedBatch( handle, m, dl, d, du, x, batchCount, batchStride, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgtsv2StridedBatch(cusparseHandle_t handle, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* x, int batchCount, int batchStride, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsv2StridedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsv2StridedBatch)(cusparseHandle_t handle, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, cuDoubleComplex* x, int batchCount, int batchStride, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgtsv2StridedBatch");
	returnVal = real_cusparseZgtsv2StridedBatch( handle, m, dl, d, du, x, batchCount, batchStride, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSgtsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const float* dl, const float* d, const float* du, const float* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const float* dl, const float* d, const float* du, const float* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgtsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseSgtsvInterleavedBatch_bufferSizeExt( handle, algo, m, dl, d, du, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgtsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const double* dl, const double* d, const double* du, const double* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const double* dl, const double* d, const double* du, const double* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgtsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseDgtsvInterleavedBatch_bufferSizeExt( handle, algo, m, dl, d, du, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgtsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgtsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseCgtsvInterleavedBatch_bufferSizeExt( handle, algo, m, dl, d, du, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgtsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgtsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseZgtsvInterleavedBatch_bufferSizeExt( handle, algo, m, dl, d, du, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSgtsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, float* dl, float* d, float* du, float* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgtsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgtsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, float* dl, float* d, float* du, float* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgtsvInterleavedBatch");
	returnVal = real_cusparseSgtsvInterleavedBatch( handle, algo, m, dl, d, du, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgtsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, double* dl, double* d, double* du, double* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgtsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgtsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, double* dl, double* d, double* du, double* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgtsvInterleavedBatch");
	returnVal = real_cusparseDgtsvInterleavedBatch( handle, algo, m, dl, d, du, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgtsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, cuComplex* dl, cuComplex* d, cuComplex* du, cuComplex* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgtsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgtsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, cuComplex* dl, cuComplex* d, cuComplex* du, cuComplex* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgtsvInterleavedBatch");
	returnVal = real_cusparseCgtsvInterleavedBatch( handle, algo, m, dl, d, du, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgtsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, cuDoubleComplex* dl, cuDoubleComplex* d, cuDoubleComplex* du, cuDoubleComplex* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgtsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgtsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, cuDoubleComplex* dl, cuDoubleComplex* d, cuDoubleComplex* du, cuDoubleComplex* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgtsvInterleavedBatch");
	returnVal = real_cusparseZgtsvInterleavedBatch( handle, algo, m, dl, d, du, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSgpsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const float* ds, const float* dl, const float* d, const float* du, const float* dw, const float* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgpsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgpsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const float* ds, const float* dl, const float* d, const float* du, const float* dw, const float* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgpsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseSgpsvInterleavedBatch_bufferSizeExt( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgpsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const double* ds, const double* dl, const double* d, const double* du, const double* dw, const double* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgpsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgpsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const double* ds, const double* dl, const double* d, const double* du, const double* dw, const double* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgpsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseDgpsvInterleavedBatch_bufferSizeExt( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgpsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const cuComplex* ds, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* dw, const cuComplex* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgpsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgpsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const cuComplex* ds, const cuComplex* dl, const cuComplex* d, const cuComplex* du, const cuComplex* dw, const cuComplex* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgpsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseCgpsvInterleavedBatch_bufferSizeExt( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgpsvInterleavedBatch_bufferSizeExt(cusparseHandle_t handle, int algo, int m, const cuDoubleComplex* ds, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* dw, const cuDoubleComplex* x, int batchCount, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgpsvInterleavedBatch_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgpsvInterleavedBatch_bufferSizeExt)(cusparseHandle_t handle, int algo, int m, const cuDoubleComplex* ds, const cuDoubleComplex* dl, const cuDoubleComplex* d, const cuDoubleComplex* du, const cuDoubleComplex* dw, const cuDoubleComplex* x, int batchCount, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgpsvInterleavedBatch_bufferSizeExt");
	returnVal = real_cusparseZgpsvInterleavedBatch_bufferSizeExt( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSgpsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, float* ds, float* dl, float* d, float* du, float* dw, float* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgpsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgpsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, float* ds, float* dl, float* d, float* du, float* dw, float* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgpsvInterleavedBatch");
	returnVal = real_cusparseSgpsvInterleavedBatch( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDgpsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, double* ds, double* dl, double* d, double* du, double* dw, double* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgpsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgpsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, double* ds, double* dl, double* d, double* du, double* dw, double* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgpsvInterleavedBatch");
	returnVal = real_cusparseDgpsvInterleavedBatch( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCgpsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, cuComplex* ds, cuComplex* dl, cuComplex* d, cuComplex* du, cuComplex* dw, cuComplex* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgpsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgpsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, cuComplex* ds, cuComplex* dl, cuComplex* d, cuComplex* du, cuComplex* dw, cuComplex* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgpsvInterleavedBatch");
	returnVal = real_cusparseCgpsvInterleavedBatch( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseZgpsvInterleavedBatch(cusparseHandle_t handle, int algo, int m, cuDoubleComplex* ds, cuDoubleComplex* dl, cuDoubleComplex* d, cuDoubleComplex* du, cuDoubleComplex* dw, cuDoubleComplex* x, int batchCount, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgpsvInterleavedBatch", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgpsvInterleavedBatch)(cusparseHandle_t handle, int algo, int m, cuDoubleComplex* ds, cuDoubleComplex* dl, cuDoubleComplex* d, cuDoubleComplex* du, cuDoubleComplex* dw, cuDoubleComplex* x, int batchCount, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgpsvInterleavedBatch");
	returnVal = real_cusparseZgpsvInterleavedBatch( handle, algo, m, ds, dl, d, du, dw, x, batchCount, pBuffer);
	armpl_logging_leave(&logger, m, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsrgemm2Info(csrgemm2Info_t* info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsrgemm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsrgemm2Info)(csrgemm2Info_t* info) = dlsym(RTLD_NEXT, "cusparseCreateCsrgemm2Info");
	returnVal = real_cusparseCreateCsrgemm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyCsrgemm2Info(csrgemm2Info_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyCsrgemm2Info", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyCsrgemm2Info)(csrgemm2Info_t info) = dlsym(RTLD_NEXT, "cusparseDestroyCsrgemm2Info");
	returnVal = real_cusparseDestroyCsrgemm2Info( info);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScsrgemm2_bufferSizeExt(cusparseHandle_t handle, int m, int n, int k, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const float* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrgemm2_bufferSizeExt", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseScsrgemm2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int k, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const float* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsrgemm2_bufferSizeExt");
	returnVal = real_cusparseScsrgemm2_bufferSizeExt( handle, m, n, k, alpha, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedRowPtrD, csrSortedColIndD, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseDcsrgemm2_bufferSizeExt(cusparseHandle_t handle, int m, int n, int k, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const double* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrgemm2_bufferSizeExt", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrgemm2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int k, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const double* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsrgemm2_bufferSizeExt");
	returnVal = real_cusparseDcsrgemm2_bufferSizeExt( handle, m, n, k, alpha, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedRowPtrD, csrSortedColIndD, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseCcsrgemm2_bufferSizeExt(cusparseHandle_t handle, int m, int n, int k, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrgemm2_bufferSizeExt", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrgemm2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int k, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsrgemm2_bufferSizeExt");
	returnVal = real_cusparseCcsrgemm2_bufferSizeExt( handle, m, n, k, alpha, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedRowPtrD, csrSortedColIndD, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseZcsrgemm2_bufferSizeExt(cusparseHandle_t handle, int m, int n, int k, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuDoubleComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrgemm2_bufferSizeExt", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrgemm2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int k, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuDoubleComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, csrgemm2Info_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsrgemm2_bufferSizeExt");
	returnVal = real_cusparseZcsrgemm2_bufferSizeExt( handle, m, n, k, alpha, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedRowPtrD, csrSortedColIndD, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseXcsrgemm2Nnz(cusparseHandle_t handle, int m, int n, int k, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, const csrgemm2Info_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrgemm2Nnz", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrgemm2Nnz)(cusparseHandle_t handle, int m, int n, int k, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrD, int nnzD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, const csrgemm2Info_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcsrgemm2Nnz");
	returnVal = real_cusparseXcsrgemm2Nnz( handle, m, n, k, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, descrD, nnzD, csrSortedRowPtrD, csrSortedColIndD, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, info, pBuffer);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseScsrgemm2(cusparseHandle_t handle, int m, int n, int k, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const float* beta, const cusparseMatDescr_t descrD, int nnzD, const float* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrgemm2", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseScsrgemm2)(cusparseHandle_t handle, int m, int n, int k, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const float* beta, const cusparseMatDescr_t descrD, int nnzD, const float* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrgemm2");
	returnVal = real_cusparseScsrgemm2( handle, m, n, k, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedValD, csrSortedRowPtrD, csrSortedColIndD, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseDcsrgemm2(cusparseHandle_t handle, int m, int n, int k, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const double* beta, const cusparseMatDescr_t descrD, int nnzD, const double* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrgemm2", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrgemm2)(cusparseHandle_t handle, int m, int n, int k, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const double* beta, const cusparseMatDescr_t descrD, int nnzD, const double* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrgemm2");
	returnVal = real_cusparseDcsrgemm2( handle, m, n, k, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedValD, csrSortedRowPtrD, csrSortedColIndD, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseCcsrgemm2(cusparseHandle_t handle, int m, int n, int k, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const cuComplex* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrgemm2", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrgemm2)(cusparseHandle_t handle, int m, int n, int k, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const cuComplex* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrgemm2");
	returnVal = real_cusparseCcsrgemm2( handle, m, n, k, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedValD, csrSortedRowPtrD, csrSortedColIndD, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseZcsrgemm2(cusparseHandle_t handle, int m, int n, int k, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuDoubleComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const cuDoubleComplex* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrgemm2", 0, 5, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrgemm2)(cusparseHandle_t handle, int m, int n, int k, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cuDoubleComplex* beta, const cusparseMatDescr_t descrD, int nnzD, const cuDoubleComplex* csrSortedValD, const int* csrSortedRowPtrD, const int* csrSortedColIndD, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, const csrgemm2Info_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrgemm2");
	returnVal = real_cusparseZcsrgemm2( handle, m, n, k, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, beta, descrD, nnzD, csrSortedValD, csrSortedRowPtrD, csrSortedColIndD, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, k, nnzB, nnzD);
	return returnVal;
}
cusparseStatus_t cusparseScsrgeam2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* beta, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrgeam2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsrgeam2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* beta, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsrgeam2_bufferSizeExt");
	returnVal = real_cusparseScsrgeam2_bufferSizeExt( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseDcsrgeam2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* beta, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrgeam2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrgeam2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* beta, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsrgeam2_bufferSizeExt");
	returnVal = real_cusparseDcsrgeam2_bufferSizeExt( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseCcsrgeam2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const cuComplex* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrgeam2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrgeam2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const cuComplex* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsrgeam2_bufferSizeExt");
	returnVal = real_cusparseCcsrgeam2_bufferSizeExt( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseZcsrgeam2_bufferSizeExt(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const cuDoubleComplex* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrgeam2_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrgeam2_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, const cuDoubleComplex* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsrgeam2_bufferSizeExt");
	returnVal = real_cusparseZcsrgeam2_bufferSizeExt( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseXcsrgeam2Nnz(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* workspace)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrgeam2Nnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrgeam2Nnz)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, int nnzA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrB, int nnzB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* workspace) = dlsym(RTLD_NEXT, "cusparseXcsrgeam2Nnz");
	returnVal = real_cusparseXcsrgeam2Nnz( handle, m, n, descrA, nnzA, csrSortedRowPtrA, csrSortedColIndA, descrB, nnzB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, workspace);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseScsrgeam2(cusparseHandle_t handle, int m, int n, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* beta, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrgeam2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsrgeam2)(cusparseHandle_t handle, int m, int n, const float* alpha, const cusparseMatDescr_t descrA, int nnzA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* beta, const cusparseMatDescr_t descrB, int nnzB, const float* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsrgeam2");
	returnVal = real_cusparseScsrgeam2( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseDcsrgeam2(cusparseHandle_t handle, int m, int n, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* beta, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrgeam2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrgeam2)(cusparseHandle_t handle, int m, int n, const double* alpha, const cusparseMatDescr_t descrA, int nnzA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* beta, const cusparseMatDescr_t descrB, int nnzB, const double* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsrgeam2");
	returnVal = real_cusparseDcsrgeam2( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseCcsrgeam2(cusparseHandle_t handle, int m, int n, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrgeam2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrgeam2)(cusparseHandle_t handle, int m, int n, const cuComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsrgeam2");
	returnVal = real_cusparseCcsrgeam2( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseZcsrgeam2(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrgeam2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrgeam2)(cusparseHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cusparseMatDescr_t descrA, int nnzA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cuDoubleComplex* beta, const cusparseMatDescr_t descrB, int nnzB, const cuDoubleComplex* csrSortedValB, const int* csrSortedRowPtrB, const int* csrSortedColIndB, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsrgeam2");
	returnVal = real_cusparseZcsrgeam2( handle, m, n, alpha, descrA, nnzA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, beta, descrB, nnzB, csrSortedValB, csrSortedRowPtrB, csrSortedColIndB, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, nnzB);
	return returnVal;
}
cusparseStatus_t cusparseScsrcolor(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsrcolor", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsrcolor)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info) = dlsym(RTLD_NEXT, "cusparseScsrcolor");
	returnVal = real_cusparseScsrcolor( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, fractionToColor, ncolors, coloring, reordering, info);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsrcolor(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsrcolor", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsrcolor)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info) = dlsym(RTLD_NEXT, "cusparseDcsrcolor");
	returnVal = real_cusparseDcsrcolor( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, fractionToColor, ncolors, coloring, reordering, info);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsrcolor(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsrcolor", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsrcolor)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info) = dlsym(RTLD_NEXT, "cusparseCcsrcolor");
	returnVal = real_cusparseCcsrcolor( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, fractionToColor, ncolors, coloring, reordering, info);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsrcolor(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsrcolor", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsrcolor)(cusparseHandle_t handle, int m, int nnz, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* fractionToColor, int* ncolors, int* coloring, int* reordering, const cusparseColorInfo_t info) = dlsym(RTLD_NEXT, "cusparseZcsrcolor");
	returnVal = real_cusparseZcsrcolor( handle, m, nnz, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, fractionToColor, ncolors, coloring, reordering, info);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSnnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSnnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSnnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr) = dlsym(RTLD_NEXT, "cusparseSnnz");
	returnVal = real_cusparseSnnz( handle, dirA, m, n, descrA, A, lda, nnzPerRowCol, nnzTotalDevHostPtr);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDnnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDnnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr) = dlsym(RTLD_NEXT, "cusparseDnnz");
	returnVal = real_cusparseDnnz( handle, dirA, m, n, descrA, A, lda, nnzPerRowCol, nnzTotalDevHostPtr);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseCnnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCnnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCnnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr) = dlsym(RTLD_NEXT, "cusparseCnnz");
	returnVal = real_cusparseCnnz( handle, dirA, m, n, descrA, A, lda, nnzPerRowCol, nnzTotalDevHostPtr);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseZnnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZnnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZnnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, int* nnzPerRowCol, int* nnzTotalDevHostPtr) = dlsym(RTLD_NEXT, "cusparseZnnz");
	returnVal = real_cusparseZnnz( handle, dirA, m, n, descrA, A, lda, nnzPerRowCol, nnzTotalDevHostPtr);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSnnz_compress(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const float* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, float tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSnnz_compress", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSnnz_compress)(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const float* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, float tol) = dlsym(RTLD_NEXT, "cusparseSnnz_compress");
	returnVal = real_cusparseSnnz_compress( handle, m, descr, csrSortedValA, csrSortedRowPtrA, nnzPerRow, nnzC, tol);
	armpl_logging_leave(&logger, m);
	return returnVal;
}
cusparseStatus_t cusparseDnnz_compress(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const double* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, double tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnnz_compress", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDnnz_compress)(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const double* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, double tol) = dlsym(RTLD_NEXT, "cusparseDnnz_compress");
	returnVal = real_cusparseDnnz_compress( handle, m, descr, csrSortedValA, csrSortedRowPtrA, nnzPerRow, nnzC, tol);
	armpl_logging_leave(&logger, m);
	return returnVal;
}
cusparseStatus_t cusparseCnnz_compress(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, cuComplex tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCnnz_compress", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCnnz_compress)(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, cuComplex tol) = dlsym(RTLD_NEXT, "cusparseCnnz_compress");
	returnVal = real_cusparseCnnz_compress( handle, m, descr, csrSortedValA, csrSortedRowPtrA, nnzPerRow, nnzC, tol);
	armpl_logging_leave(&logger, m);
	return returnVal;
}
cusparseStatus_t cusparseZnnz_compress(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, cuDoubleComplex tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZnnz_compress", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseZnnz_compress)(cusparseHandle_t handle, int m, const cusparseMatDescr_t descr, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, int* nnzPerRow, int* nnzC, cuDoubleComplex tol) = dlsym(RTLD_NEXT, "cusparseZnnz_compress");
	returnVal = real_cusparseZnnz_compress( handle, m, descr, csrSortedValA, csrSortedRowPtrA, nnzPerRow, nnzC, tol);
	armpl_logging_leave(&logger, m);
	return returnVal;
}
cusparseStatus_t cusparseScsr2csr_compress(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, float* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, float tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2csr_compress", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2csr_compress)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, float* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, float tol) = dlsym(RTLD_NEXT, "cusparseScsr2csr_compress");
	returnVal = real_cusparseScsr2csr_compress( handle, m, n, descrA, csrSortedValA, csrSortedColIndA, csrSortedRowPtrA, nnzA, nnzPerRow, csrSortedValC, csrSortedColIndC, csrSortedRowPtrC, tol);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2csr_compress(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, double* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, double tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2csr_compress", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2csr_compress)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, double* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, double tol) = dlsym(RTLD_NEXT, "cusparseDcsr2csr_compress");
	returnVal = real_cusparseDcsr2csr_compress( handle, m, n, descrA, csrSortedValA, csrSortedColIndA, csrSortedRowPtrA, nnzA, nnzPerRow, csrSortedValC, csrSortedColIndC, csrSortedRowPtrC, tol);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2csr_compress(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, cuComplex* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, cuComplex tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2csr_compress", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2csr_compress)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, cuComplex* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, cuComplex tol) = dlsym(RTLD_NEXT, "cusparseCcsr2csr_compress");
	returnVal = real_cusparseCcsr2csr_compress( handle, m, n, descrA, csrSortedValA, csrSortedColIndA, csrSortedRowPtrA, nnzA, nnzPerRow, csrSortedValC, csrSortedColIndC, csrSortedRowPtrC, tol);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2csr_compress(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, cuDoubleComplex* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, cuDoubleComplex tol)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2csr_compress", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2csr_compress)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedColIndA, const int* csrSortedRowPtrA, int nnzA, const int* nnzPerRow, cuDoubleComplex* csrSortedValC, int* csrSortedColIndC, int* csrSortedRowPtrC, cuDoubleComplex tol) = dlsym(RTLD_NEXT, "cusparseZcsr2csr_compress");
	returnVal = real_cusparseZcsr2csr_compress( handle, m, n, descrA, csrSortedValA, csrSortedColIndA, csrSortedRowPtrA, nnzA, nnzPerRow, csrSortedValC, csrSortedColIndC, csrSortedRowPtrC, tol);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSdense2csr(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, const int* nnzPerRow, float* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSdense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSdense2csr)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, const int* nnzPerRow, float* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA) = dlsym(RTLD_NEXT, "cusparseSdense2csr");
	returnVal = real_cusparseSdense2csr( handle, m, n, descrA, A, lda, nnzPerRow, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDdense2csr(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, const int* nnzPerRow, double* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDdense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDdense2csr)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, const int* nnzPerRow, double* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA) = dlsym(RTLD_NEXT, "cusparseDdense2csr");
	returnVal = real_cusparseDdense2csr( handle, m, n, descrA, A, lda, nnzPerRow, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseCdense2csr(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, const int* nnzPerRow, cuComplex* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCdense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCdense2csr)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, const int* nnzPerRow, cuComplex* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA) = dlsym(RTLD_NEXT, "cusparseCdense2csr");
	returnVal = real_cusparseCdense2csr( handle, m, n, descrA, A, lda, nnzPerRow, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseZdense2csr(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, const int* nnzPerRow, cuDoubleComplex* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZdense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZdense2csr)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, const int* nnzPerRow, cuDoubleComplex* csrSortedValA, int* csrSortedRowPtrA, int* csrSortedColIndA) = dlsym(RTLD_NEXT, "cusparseZdense2csr");
	returnVal = real_cusparseZdense2csr( handle, m, n, descrA, A, lda, nnzPerRow, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseScsr2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float* A, int lda) = dlsym(RTLD_NEXT, "cusparseScsr2dense");
	returnVal = real_cusparseScsr2dense( handle, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, double* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, double* A, int lda) = dlsym(RTLD_NEXT, "cusparseDcsr2dense");
	returnVal = real_cusparseDcsr2dense( handle, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuComplex* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cusparseCcsr2dense");
	returnVal = real_cusparseCcsr2dense( handle, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuDoubleComplex* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cusparseZcsr2dense");
	returnVal = real_cusparseZcsr2dense( handle, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSdense2csc(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, const int* nnzPerCol, float* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSdense2csc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSdense2csc)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* A, int lda, const int* nnzPerCol, float* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA) = dlsym(RTLD_NEXT, "cusparseSdense2csc");
	returnVal = real_cusparseSdense2csc( handle, m, n, descrA, A, lda, nnzPerCol, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDdense2csc(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, const int* nnzPerCol, double* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDdense2csc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDdense2csc)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* A, int lda, const int* nnzPerCol, double* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA) = dlsym(RTLD_NEXT, "cusparseDdense2csc");
	returnVal = real_cusparseDdense2csc( handle, m, n, descrA, A, lda, nnzPerCol, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseCdense2csc(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, const int* nnzPerCol, cuComplex* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCdense2csc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCdense2csc)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* A, int lda, const int* nnzPerCol, cuComplex* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA) = dlsym(RTLD_NEXT, "cusparseCdense2csc");
	returnVal = real_cusparseCdense2csc( handle, m, n, descrA, A, lda, nnzPerCol, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseZdense2csc(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, const int* nnzPerCol, cuDoubleComplex* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZdense2csc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZdense2csc)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* A, int lda, const int* nnzPerCol, cuDoubleComplex* cscSortedValA, int* cscSortedRowIndA, int* cscSortedColPtrA) = dlsym(RTLD_NEXT, "cusparseZdense2csc");
	returnVal = real_cusparseZdense2csc( handle, m, n, descrA, A, lda, nnzPerCol, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseScsc2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, float* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsc2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsc2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const float* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, float* A, int lda) = dlsym(RTLD_NEXT, "cusparseScsc2dense");
	returnVal = real_cusparseScsc2dense( handle, m, n, descrA, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDcsc2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, double* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsc2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsc2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const double* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, double* A, int lda) = dlsym(RTLD_NEXT, "cusparseDcsc2dense");
	returnVal = real_cusparseDcsc2dense( handle, m, n, descrA, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseCcsc2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, cuComplex* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsc2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsc2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cusparseCcsc2dense");
	returnVal = real_cusparseCcsc2dense( handle, m, n, descrA, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseZcsc2dense(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, cuDoubleComplex* A, int lda)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsc2dense", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsc2dense)(cusparseHandle_t handle, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* cscSortedValA, const int* cscSortedRowIndA, const int* cscSortedColPtrA, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cusparseZcsc2dense");
	returnVal = real_cusparseZcsc2dense( handle, m, n, descrA, cscSortedValA, cscSortedRowIndA, cscSortedColPtrA, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseXcoo2csr(cusparseHandle_t handle, const int* cooRowInd, int nnz, int m, int* csrSortedRowPtr, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcoo2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseXcoo2csr)(cusparseHandle_t handle, const int* cooRowInd, int nnz, int m, int* csrSortedRowPtr, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseXcoo2csr");
	returnVal = real_cusparseXcoo2csr( handle, cooRowInd, nnz, m, csrSortedRowPtr, idxBase);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcsr2coo(cusparseHandle_t handle, const int* csrSortedRowPtr, int nnz, int m, int* cooRowInd, cusparseIndexBase_t idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsr2coo", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseXcsr2coo)(cusparseHandle_t handle, const int* csrSortedRowPtr, int nnz, int m, int* cooRowInd, cusparseIndexBase_t idxBase) = dlsym(RTLD_NEXT, "cusparseXcsr2coo");
	returnVal = real_cusparseXcsr2coo( handle, csrSortedRowPtr, nnz, m, cooRowInd, idxBase);
	armpl_logging_leave(&logger, m, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcsr2bsrNnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int* nnzTotalDevHostPtr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsr2bsrNnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcsr2bsrNnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int* nnzTotalDevHostPtr) = dlsym(RTLD_NEXT, "cusparseXcsr2bsrNnz");
	returnVal = real_cusparseXcsr2bsrNnz( handle, dirA, m, n, descrA, csrSortedRowPtrA, csrSortedColIndA, blockDim, descrC, bsrSortedRowPtrC, nnzTotalDevHostPtr);
	armpl_logging_leave(&logger, m, n, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseScsr2bsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2bsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2bsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseScsr2bsr");
	returnVal = real_cusparseScsr2bsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, blockDim, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC);
	armpl_logging_leave(&logger, m, n, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2bsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2bsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2bsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseDcsr2bsr");
	returnVal = real_cusparseDcsr2bsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, blockDim, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC);
	armpl_logging_leave(&logger, m, n, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2bsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2bsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2bsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseCcsr2bsr");
	returnVal = real_cusparseCcsr2bsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, blockDim, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC);
	armpl_logging_leave(&logger, m, n, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2bsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2bsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2bsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseZcsr2bsr");
	returnVal = real_cusparseZcsr2bsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, blockDim, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC);
	armpl_logging_leave(&logger, m, n, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSbsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSbsr2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSbsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseSbsr2csr");
	returnVal = real_cusparseSbsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseDbsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDbsr2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDbsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseDbsr2csr");
	returnVal = real_cusparseDbsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseCbsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCbsr2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCbsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseCbsr2csr");
	returnVal = real_cusparseCbsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseZbsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZbsr2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZbsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int blockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseZbsr2csr");
	returnVal = real_cusparseZbsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, blockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb, blockDim);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsc_bufferSize(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsc_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsc_bufferSize)(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsc_bufferSize");
	returnVal = real_cusparseSgebsr2gebsc_bufferSize( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsc_bufferSize(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsc_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsc_bufferSize)(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsc_bufferSize");
	returnVal = real_cusparseDgebsr2gebsc_bufferSize( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsc_bufferSize(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsc_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsc_bufferSize)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsc_bufferSize");
	returnVal = real_cusparseCgebsr2gebsc_bufferSize( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsc_bufferSize(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsc_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsc_bufferSize)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsc_bufferSize");
	returnVal = real_cusparseZgebsr2gebsc_bufferSize( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsc_bufferSizeExt(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsc_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsc_bufferSizeExt)(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsc_bufferSizeExt");
	returnVal = real_cusparseSgebsr2gebsc_bufferSizeExt( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsc_bufferSizeExt(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsc_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsc_bufferSizeExt)(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsc_bufferSizeExt");
	returnVal = real_cusparseDgebsr2gebsc_bufferSizeExt( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsc_bufferSizeExt(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsc_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsc_bufferSizeExt)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsc_bufferSizeExt");
	returnVal = real_cusparseCgebsr2gebsc_bufferSizeExt( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsc_bufferSizeExt(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsc_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsc_bufferSizeExt)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsc_bufferSizeExt");
	returnVal = real_cusparseZgebsr2gebsc_bufferSizeExt( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsc(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, float* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsc)(cusparseHandle_t handle, int mb, int nb, int nnzb, const float* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, float* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsc");
	returnVal = real_cusparseSgebsr2gebsc( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, bscVal, bscRowInd, bscColPtr, copyValues, idxBase, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsc(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, double* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsc)(cusparseHandle_t handle, int mb, int nb, int nnzb, const double* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, double* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsc");
	returnVal = real_cusparseDgebsr2gebsc( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, bscVal, bscRowInd, bscColPtr, copyValues, idxBase, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsc(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, cuComplex* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsc)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, cuComplex* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsc");
	returnVal = real_cusparseCgebsr2gebsc( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, bscVal, bscRowInd, bscColPtr, copyValues, idxBase, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsc(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, cuDoubleComplex* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsc", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsc)(cusparseHandle_t handle, int mb, int nb, int nnzb, const cuDoubleComplex* bsrSortedVal, const int* bsrSortedRowPtr, const int* bsrSortedColInd, int rowBlockDim, int colBlockDim, cuDoubleComplex* bscVal, int* bscRowInd, int* bscColPtr, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsc");
	returnVal = real_cusparseZgebsr2gebsc( handle, mb, nb, nnzb, bsrSortedVal, bsrSortedRowPtr, bsrSortedColInd, rowBlockDim, colBlockDim, bscVal, bscRowInd, bscColPtr, copyValues, idxBase, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseXgebsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXgebsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseXgebsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseXgebsr2csr");
	returnVal = real_cusparseXgebsr2csr( handle, dirA, mb, nb, descrA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDim, colBlockDim, descrC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, float* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseSgebsr2csr");
	returnVal = real_cusparseSgebsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDim, colBlockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, double* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseDgebsr2csr");
	returnVal = real_cusparseDgebsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDim, colBlockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, cuComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseCgebsr2csr");
	returnVal = real_cusparseCgebsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDim, colBlockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2csr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2csr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDim, int colBlockDim, const cusparseMatDescr_t descrC, cuDoubleComplex* csrSortedValC, int* csrSortedRowPtrC, int* csrSortedColIndC) = dlsym(RTLD_NEXT, "cusparseZgebsr2csr");
	returnVal = real_cusparseZgebsr2csr( handle, dirA, mb, nb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDim, colBlockDim, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC);
	armpl_logging_leave(&logger, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseScsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2gebsr_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsr2gebsr_bufferSize");
	returnVal = real_cusparseScsr2gebsr_bufferSize( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2gebsr_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsr2gebsr_bufferSize");
	returnVal = real_cusparseDcsr2gebsr_bufferSize( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2gebsr_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsr2gebsr_bufferSize");
	returnVal = real_cusparseCcsr2gebsr_bufferSize( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2gebsr_bufferSize", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsr2gebsr_bufferSize");
	returnVal = real_cusparseZcsr2gebsr_bufferSize( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseScsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2gebsr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseScsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseScsr2gebsr_bufferSizeExt( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2gebsr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDcsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseDcsr2gebsr_bufferSizeExt( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2gebsr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCcsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseCcsr2gebsr_bufferSizeExt( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2gebsr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, int rowBlockDim, int colBlockDim, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZcsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseZcsr2gebsr_bufferSizeExt( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, rowBlockDim, colBlockDim, pBufferSize);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseXcsr2gebsrNnz(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int rowBlockDim, int colBlockDim, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsr2gebsrNnz", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseXcsr2gebsrNnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int rowBlockDim, int colBlockDim, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcsr2gebsrNnz");
	returnVal = real_cusparseXcsr2gebsrNnz( handle, dirA, m, n, descrA, csrSortedRowPtrA, csrSortedColIndA, descrC, bsrSortedRowPtrC, rowBlockDim, colBlockDim, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseScsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2gebsr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsr2gebsr");
	returnVal = real_cusparseScsr2gebsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDim, colBlockDim, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2gebsr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsr2gebsr");
	returnVal = real_cusparseDcsr2gebsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDim, colBlockDim, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2gebsr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsr2gebsr");
	returnVal = real_cusparseCcsr2gebsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDim, colBlockDim, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2gebsr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int m, int n, const cusparseMatDescr_t descrA, const cuDoubleComplex* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDim, int colBlockDim, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsr2gebsr");
	returnVal = real_cusparseZcsr2gebsr( handle, dirA, m, n, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDim, colBlockDim, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsr_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsr_bufferSize");
	returnVal = real_cusparseSgebsr2gebsr_bufferSize( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsr_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsr_bufferSize");
	returnVal = real_cusparseDgebsr2gebsr_bufferSize( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsr_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsr_bufferSize");
	returnVal = real_cusparseCgebsr2gebsr_bufferSize( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsr_bufferSize(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsr_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsr_bufferSize)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, int* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsr_bufferSize");
	returnVal = real_cusparseZgebsr2gebsr_bufferSize( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseSgebsr2gebsr_bufferSizeExt( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseDgebsr2gebsr_bufferSizeExt( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseCgebsr2gebsr_bufferSizeExt( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsr_bufferSizeExt(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsr_bufferSizeExt)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, int rowBlockDimC, int colBlockDimC, size_t* pBufferSize) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsr_bufferSizeExt");
	returnVal = real_cusparseZgebsr2gebsr_bufferSizeExt( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, rowBlockDimC, colBlockDimC, pBufferSize);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseXgebsr2gebsrNnz(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int rowBlockDimC, int colBlockDimC, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXgebsr2gebsrNnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXgebsr2gebsrNnz)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, int* bsrSortedRowPtrC, int rowBlockDimC, int colBlockDimC, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXgebsr2gebsrNnz");
	returnVal = real_cusparseXgebsr2gebsrNnz( handle, dirA, mb, nb, nnzb, descrA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, descrC, bsrSortedRowPtrC, rowBlockDimC, colBlockDimC, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseSgebsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSgebsr2gebsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSgebsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const float* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, float* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSgebsr2gebsr");
	returnVal = real_cusparseSgebsr2gebsr( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDimC, colBlockDimC, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseDgebsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDgebsr2gebsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDgebsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const double* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, double* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDgebsr2gebsr");
	returnVal = real_cusparseDgebsr2gebsr( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDimC, colBlockDimC, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCgebsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCgebsr2gebsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCgebsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, cuComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCgebsr2gebsr");
	returnVal = real_cusparseCgebsr2gebsr( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDimC, colBlockDimC, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseZgebsr2gebsr(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZgebsr2gebsr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZgebsr2gebsr)(cusparseHandle_t handle, cusparseDirection_t dirA, int mb, int nb, int nnzb, const cusparseMatDescr_t descrA, const cuDoubleComplex* bsrSortedValA, const int* bsrSortedRowPtrA, const int* bsrSortedColIndA, int rowBlockDimA, int colBlockDimA, const cusparseMatDescr_t descrC, cuDoubleComplex* bsrSortedValC, int* bsrSortedRowPtrC, int* bsrSortedColIndC, int rowBlockDimC, int colBlockDimC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZgebsr2gebsr");
	returnVal = real_cusparseZgebsr2gebsr( handle, dirA, mb, nb, nnzb, descrA, bsrSortedValA, bsrSortedRowPtrA, bsrSortedColIndA, rowBlockDimA, colBlockDimA, descrC, bsrSortedValC, bsrSortedRowPtrC, bsrSortedColIndC, rowBlockDimC, colBlockDimC, pBuffer);
	armpl_logging_leave(&logger, nnzb, mb, nb);
	return returnVal;
}
cusparseStatus_t cusparseCreateIdentityPermutation(cusparseHandle_t handle, int n, int* p)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateIdentityPermutation", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateIdentityPermutation)(cusparseHandle_t handle, int n, int* p) = dlsym(RTLD_NEXT, "cusparseCreateIdentityPermutation");
	returnVal = real_cusparseCreateIdentityPermutation( handle, n, p);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cusparseStatus_t cusparseXcoosort_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, const int* cooRowsA, const int* cooColsA, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcoosort_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcoosort_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, const int* cooRowsA, const int* cooColsA, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseXcoosort_bufferSizeExt");
	returnVal = real_cusparseXcoosort_bufferSizeExt( handle, m, n, nnz, cooRowsA, cooColsA, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcoosortByRow(cusparseHandle_t handle, int m, int n, int nnz, int* cooRowsA, int* cooColsA, int* P, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcoosortByRow", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcoosortByRow)(cusparseHandle_t handle, int m, int n, int nnz, int* cooRowsA, int* cooColsA, int* P, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcoosortByRow");
	returnVal = real_cusparseXcoosortByRow( handle, m, n, nnz, cooRowsA, cooColsA, P, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcoosortByColumn(cusparseHandle_t handle, int m, int n, int nnz, int* cooRowsA, int* cooColsA, int* P, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcoosortByColumn", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcoosortByColumn)(cusparseHandle_t handle, int m, int n, int nnz, int* cooRowsA, int* cooColsA, int* P, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcoosortByColumn");
	returnVal = real_cusparseXcoosortByColumn( handle, m, n, nnz, cooRowsA, cooColsA, P, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcsrsort_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, const int* csrRowPtrA, const int* csrColIndA, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrsort_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrsort_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, const int* csrRowPtrA, const int* csrColIndA, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseXcsrsort_bufferSizeExt");
	returnVal = real_cusparseXcsrsort_bufferSizeExt( handle, m, n, nnz, csrRowPtrA, csrColIndA, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcsrsort(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, const int* csrRowPtrA, int* csrColIndA, int* P, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcsrsort", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcsrsort)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, const int* csrRowPtrA, int* csrColIndA, int* P, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcsrsort");
	returnVal = real_cusparseXcsrsort( handle, m, n, nnz, descrA, csrRowPtrA, csrColIndA, P, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcscsort_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, const int* cscColPtrA, const int* cscRowIndA, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcscsort_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcscsort_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, const int* cscColPtrA, const int* cscRowIndA, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseXcscsort_bufferSizeExt");
	returnVal = real_cusparseXcscsort_bufferSizeExt( handle, m, n, nnz, cscColPtrA, cscRowIndA, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseXcscsort(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, const int* cscColPtrA, int* cscRowIndA, int* P, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseXcscsort", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseXcscsort)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, const int* cscColPtrA, int* cscRowIndA, int* P, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseXcscsort");
	returnVal = real_cusparseXcscsort( handle, m, n, nnz, descrA, cscColPtrA, cscRowIndA, P, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsru2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsru2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsru2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseScsru2csr_bufferSizeExt");
	returnVal = real_cusparseScsru2csr_bufferSizeExt( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsru2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsru2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsru2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDcsru2csr_bufferSizeExt");
	returnVal = real_cusparseDcsru2csr_bufferSizeExt( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsru2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsru2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsru2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseCcsru2csr_bufferSizeExt");
	returnVal = real_cusparseCcsru2csr_bufferSizeExt( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsru2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnz, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsru2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsru2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnz, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseZcsru2csr_bufferSizeExt");
	returnVal = real_cusparseZcsru2csr_bufferSizeExt( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsru2csr(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsru2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsru2csr)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsru2csr");
	returnVal = real_cusparseScsru2csr( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsru2csr(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsru2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsru2csr)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsru2csr");
	returnVal = real_cusparseDcsru2csr( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsru2csr(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsru2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsru2csr)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsru2csr");
	returnVal = real_cusparseCcsru2csr( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsru2csr(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsru2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsru2csr)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsru2csr");
	returnVal = real_cusparseZcsru2csr( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseScsr2csru(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScsr2csru", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseScsr2csru)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, float* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseScsr2csru");
	returnVal = real_cusparseScsr2csru( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDcsr2csru(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDcsr2csru", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDcsr2csru)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, double* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDcsr2csru");
	returnVal = real_cusparseDcsr2csru( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCcsr2csru(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCcsr2csru", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCcsr2csru)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseCcsr2csru");
	returnVal = real_cusparseCcsr2csru( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseZcsr2csru(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseZcsr2csru", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseZcsr2csru)(cusparseHandle_t handle, int m, int n, int nnz, const cusparseMatDescr_t descrA, cuDoubleComplex* csrVal, const int* csrRowPtr, int* csrColInd, csru2csrInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseZcsr2csru");
	returnVal = real_cusparseZcsr2csru( handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, info, pBuffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csr_bufferSizeExt");
	returnVal = real_cusparseSpruneDense2csr_bufferSizeExt( handle, m, n, A, lda, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csr_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csr_bufferSizeExt");
	returnVal = real_cusparseDpruneDense2csr_bufferSizeExt( handle, m, n, A, lda, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csrNnz(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csrNnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csrNnz)(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csrNnz");
	returnVal = real_cusparseSpruneDense2csrNnz( handle, m, n, A, lda, threshold, descrC, csrRowPtrC, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csrNnz(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csrNnz", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csrNnz)(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csrNnz");
	returnVal = real_cusparseDpruneDense2csrNnz( handle, m, n, A, lda, threshold, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csr(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csr)(cusparseHandle_t handle, int m, int n, const float* A, int lda, const float* threshold, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csr");
	returnVal = real_cusparseSpruneDense2csr( handle, m, n, A, lda, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csr(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csr", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csr)(cusparseHandle_t handle, int m, int n, const double* A, int lda, const double* threshold, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csr");
	returnVal = real_cusparseDpruneDense2csr( handle, m, n, A, lda, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csr_bufferSizeExt");
	returnVal = real_cusparseSpruneCsr2csr_bufferSizeExt( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csr_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csr_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csr_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csr_bufferSizeExt");
	returnVal = real_cusparseDpruneCsr2csr_bufferSizeExt( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csrNnz(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csrNnz", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csrNnz)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csrNnz");
	returnVal = real_cusparseSpruneCsr2csrNnz( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csrNnz(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csrNnz", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csrNnz)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csrNnz");
	returnVal = real_cusparseDpruneCsr2csrNnz( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csr(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csr)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const float* threshold, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csr");
	returnVal = real_cusparseSpruneCsr2csr( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csr(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csr", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csr)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, const double* threshold, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csr");
	returnVal = real_cusparseDpruneCsr2csr( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, threshold, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csrByPercentage_bufferSizeExt(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csrByPercentage_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csrByPercentage_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csrByPercentage_bufferSizeExt");
	returnVal = real_cusparseSpruneDense2csrByPercentage_bufferSizeExt( handle, m, n, A, lda, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csrByPercentage_bufferSizeExt(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csrByPercentage_bufferSizeExt", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csrByPercentage_bufferSizeExt)(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csrByPercentage_bufferSizeExt");
	returnVal = real_cusparseDpruneDense2csrByPercentage_bufferSizeExt( handle, m, n, A, lda, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csrNnzByPercentage(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csrNnzByPercentage", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csrNnzByPercentage)(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csrNnzByPercentage");
	returnVal = real_cusparseSpruneDense2csrNnzByPercentage( handle, m, n, A, lda, percentage, descrC, csrRowPtrC, nnzTotalDevHostPtr, info, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csrNnzByPercentage(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csrNnzByPercentage", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csrNnzByPercentage)(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, int* csrRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csrNnzByPercentage");
	returnVal = real_cusparseDpruneDense2csrNnzByPercentage( handle, m, n, A, lda, percentage, descrC, csrRowPtrC, nnzTotalDevHostPtr, info, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneDense2csrByPercentage(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneDense2csrByPercentage", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneDense2csrByPercentage)(cusparseHandle_t handle, int m, int n, const float* A, int lda, float percentage, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneDense2csrByPercentage");
	returnVal = real_cusparseSpruneDense2csrByPercentage( handle, m, n, A, lda, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseDpruneDense2csrByPercentage(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneDense2csrByPercentage", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneDense2csrByPercentage)(cusparseHandle_t handle, int m, int n, const double* A, int lda, float percentage, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneDense2csrByPercentage");
	returnVal = real_cusparseDpruneDense2csrByPercentage( handle, m, n, A, lda, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csrByPercentage_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csrByPercentage_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csrByPercentage_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, const float* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csrByPercentage_bufferSizeExt");
	returnVal = real_cusparseSpruneCsr2csrByPercentage_bufferSizeExt( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csrByPercentage_bufferSizeExt(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csrByPercentage_bufferSizeExt", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csrByPercentage_bufferSizeExt)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, const double* csrSortedValC, const int* csrSortedRowPtrC, const int* csrSortedColIndC, pruneInfo_t info, size_t* pBufferSizeInBytes) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csrByPercentage_bufferSizeExt");
	returnVal = real_cusparseDpruneCsr2csrByPercentage_bufferSizeExt( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBufferSizeInBytes);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csrNnzByPercentage(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csrNnzByPercentage", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csrNnzByPercentage)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csrNnzByPercentage");
	returnVal = real_cusparseSpruneCsr2csrNnzByPercentage( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, info, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csrNnzByPercentage(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csrNnzByPercentage", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csrNnzByPercentage)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, int* csrSortedRowPtrC, int* nnzTotalDevHostPtr, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csrNnzByPercentage");
	returnVal = real_cusparseDpruneCsr2csrNnzByPercentage( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedRowPtrC, nnzTotalDevHostPtr, info, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseSpruneCsr2csrByPercentage(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpruneCsr2csrByPercentage", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseSpruneCsr2csrByPercentage)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const float* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, float* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseSpruneCsr2csrByPercentage");
	returnVal = real_cusparseSpruneCsr2csrByPercentage( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseDpruneCsr2csrByPercentage(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDpruneCsr2csrByPercentage", 0, 2, 0, 0);
	cusparseStatus_t (*real_cusparseDpruneCsr2csrByPercentage)(cusparseHandle_t handle, int m, int n, int nnzA, const cusparseMatDescr_t descrA, const double* csrSortedValA, const int* csrSortedRowPtrA, const int* csrSortedColIndA, float percentage, const cusparseMatDescr_t descrC, double* csrSortedValC, const int* csrSortedRowPtrC, int* csrSortedColIndC, pruneInfo_t info, void* pBuffer) = dlsym(RTLD_NEXT, "cusparseDpruneCsr2csrByPercentage");
	returnVal = real_cusparseDpruneCsr2csrByPercentage( handle, m, n, nnzA, descrA, csrSortedValA, csrSortedRowPtrA, csrSortedColIndA, percentage, descrC, csrSortedValC, csrSortedRowPtrC, csrSortedColIndC, info, pBuffer);
	armpl_logging_leave(&logger, m, n);
	return returnVal;
}
cusparseStatus_t cusparseCsr2cscEx2(cusparseHandle_t handle, int m, int n, int nnz, const void* csrVal, const int* csrRowPtr, const int* csrColInd, void* cscVal, int* cscColPtr, int* cscRowInd, cudaDataType valType, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, cusparseCsr2CscAlg_t alg, void* buffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsr2cscEx2", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCsr2cscEx2)(cusparseHandle_t handle, int m, int n, int nnz, const void* csrVal, const int* csrRowPtr, const int* csrColInd, void* cscVal, int* cscColPtr, int* cscRowInd, cudaDataType valType, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, cusparseCsr2CscAlg_t alg, void* buffer) = dlsym(RTLD_NEXT, "cusparseCsr2cscEx2");
	returnVal = real_cusparseCsr2cscEx2( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, cscVal, cscColPtr, cscRowInd, valType, copyValues, idxBase, alg, buffer);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsr2cscEx2_bufferSize(cusparseHandle_t handle, int m, int n, int nnz, const void* csrVal, const int* csrRowPtr, const int* csrColInd, void* cscVal, int* cscColPtr, int* cscRowInd, cudaDataType valType, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, cusparseCsr2CscAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsr2cscEx2_bufferSize", 0, 3, 0, 0);
	cusparseStatus_t (*real_cusparseCsr2cscEx2_bufferSize)(cusparseHandle_t handle, int m, int n, int nnz, const void* csrVal, const int* csrRowPtr, const int* csrColInd, void* cscVal, int* cscColPtr, int* cscRowInd, cudaDataType valType, cusparseAction_t copyValues, cusparseIndexBase_t idxBase, cusparseCsr2CscAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseCsr2cscEx2_bufferSize");
	returnVal = real_cusparseCsr2cscEx2_bufferSize( handle, m, n, nnz, csrVal, csrRowPtr, csrColInd, cscVal, cscColPtr, cscRowInd, valType, copyValues, idxBase, alg, bufferSize);
	armpl_logging_leave(&logger, m, n, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCreateSpVec(cusparseSpVecDescr_t* spVecDescr, int64_t size, int64_t nnz, void* indices, void* values, cusparseIndexType_t idxType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateSpVec", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateSpVec)(cusparseSpVecDescr_t* spVecDescr, int64_t size, int64_t nnz, void* indices, void* values, cusparseIndexType_t idxType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateSpVec");
	returnVal = real_cusparseCreateSpVec( spVecDescr, size, nnz, indices, values, idxType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseDestroySpVec(cusparseSpVecDescr_t spVecDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroySpVec", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroySpVec)(cusparseSpVecDescr_t spVecDescr) = dlsym(RTLD_NEXT, "cusparseDestroySpVec");
	returnVal = real_cusparseDestroySpVec( spVecDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpVecGet(cusparseSpVecDescr_t spVecDescr, int64_t* size, int64_t* nnz, void** indices, void** values, cusparseIndexType_t* idxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVecGet", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSpVecGet)(cusparseSpVecDescr_t spVecDescr, int64_t* size, int64_t* nnz, void** indices, void** values, cusparseIndexType_t* idxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType) = dlsym(RTLD_NEXT, "cusparseSpVecGet");
	returnVal = real_cusparseSpVecGet( spVecDescr, size, nnz, indices, values, idxType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSpVecGetIndexBase(cusparseSpVecDescr_t spVecDescr, cusparseIndexBase_t* idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVecGetIndexBase", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpVecGetIndexBase)(cusparseSpVecDescr_t spVecDescr, cusparseIndexBase_t* idxBase) = dlsym(RTLD_NEXT, "cusparseSpVecGetIndexBase");
	returnVal = real_cusparseSpVecGetIndexBase( spVecDescr, idxBase);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpVecGetValues(cusparseSpVecDescr_t spVecDescr, void** values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVecGetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpVecGetValues)(cusparseSpVecDescr_t spVecDescr, void** values) = dlsym(RTLD_NEXT, "cusparseSpVecGetValues");
	returnVal = real_cusparseSpVecGetValues( spVecDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpVecSetValues(cusparseSpVecDescr_t spVecDescr, void* values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVecSetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpVecSetValues)(cusparseSpVecDescr_t spVecDescr, void* values) = dlsym(RTLD_NEXT, "cusparseSpVecSetValues");
	returnVal = real_cusparseSpVecSetValues( spVecDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateDnVec(cusparseDnVecDescr_t* dnVecDescr, int64_t size, void* values, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateDnVec", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateDnVec)(cusparseDnVecDescr_t* dnVecDescr, int64_t size, void* values, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateDnVec");
	returnVal = real_cusparseCreateDnVec( dnVecDescr, size, values, valueType);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyDnVec(cusparseDnVecDescr_t dnVecDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyDnVec", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyDnVec)(cusparseDnVecDescr_t dnVecDescr) = dlsym(RTLD_NEXT, "cusparseDestroyDnVec");
	returnVal = real_cusparseDestroyDnVec( dnVecDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnVecGet(cusparseDnVecDescr_t dnVecDescr, int64_t* size, void** values, cudaDataType* valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnVecGet", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnVecGet)(cusparseDnVecDescr_t dnVecDescr, int64_t* size, void** values, cudaDataType* valueType) = dlsym(RTLD_NEXT, "cusparseDnVecGet");
	returnVal = real_cusparseDnVecGet( dnVecDescr, size, values, valueType);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnVecGetValues(cusparseDnVecDescr_t dnVecDescr, void** values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnVecGetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnVecGetValues)(cusparseDnVecDescr_t dnVecDescr, void** values) = dlsym(RTLD_NEXT, "cusparseDnVecGetValues");
	returnVal = real_cusparseDnVecGetValues( dnVecDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnVecSetValues(cusparseDnVecDescr_t dnVecDescr, void* values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnVecSetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnVecSetValues)(cusparseDnVecDescr_t dnVecDescr, void* values) = dlsym(RTLD_NEXT, "cusparseDnVecSetValues");
	returnVal = real_cusparseDnVecSetValues( dnVecDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroySpMat(cusparseSpMatDescr_t spMatDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroySpMat", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroySpMat)(cusparseSpMatDescr_t spMatDescr) = dlsym(RTLD_NEXT, "cusparseDestroySpMat");
	returnVal = real_cusparseDestroySpMat( spMatDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetFormat(cusparseSpMatDescr_t spMatDescr, cusparseFormat_t* format)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetFormat", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetFormat)(cusparseSpMatDescr_t spMatDescr, cusparseFormat_t* format) = dlsym(RTLD_NEXT, "cusparseSpMatGetFormat");
	returnVal = real_cusparseSpMatGetFormat( spMatDescr, format);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetIndexBase(cusparseSpMatDescr_t spMatDescr, cusparseIndexBase_t* idxBase)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetIndexBase", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetIndexBase)(cusparseSpMatDescr_t spMatDescr, cusparseIndexBase_t* idxBase) = dlsym(RTLD_NEXT, "cusparseSpMatGetIndexBase");
	returnVal = real_cusparseSpMatGetIndexBase( spMatDescr, idxBase);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetValues(cusparseSpMatDescr_t spMatDescr, void** values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetValues)(cusparseSpMatDescr_t spMatDescr, void** values) = dlsym(RTLD_NEXT, "cusparseSpMatGetValues");
	returnVal = real_cusparseSpMatGetValues( spMatDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatSetValues(cusparseSpMatDescr_t spMatDescr, void* values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatSetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatSetValues)(cusparseSpMatDescr_t spMatDescr, void* values) = dlsym(RTLD_NEXT, "cusparseSpMatSetValues");
	returnVal = real_cusparseSpMatSetValues( spMatDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetSize(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetSize", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetSize)(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz) = dlsym(RTLD_NEXT, "cusparseSpMatGetSize");
	returnVal = real_cusparseSpMatGetSize( spMatDescr, rows, cols, nnz);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseSpMatSetStridedBatch(cusparseSpMatDescr_t spMatDescr, int batchCount)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatSetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatSetStridedBatch)(cusparseSpMatDescr_t spMatDescr, int batchCount) = dlsym(RTLD_NEXT, "cusparseSpMatSetStridedBatch");
	returnVal = real_cusparseSpMatSetStridedBatch( spMatDescr, batchCount);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetStridedBatch(cusparseSpMatDescr_t spMatDescr, int* batchCount)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetStridedBatch)(cusparseSpMatDescr_t spMatDescr, int* batchCount) = dlsym(RTLD_NEXT, "cusparseSpMatGetStridedBatch");
	returnVal = real_cusparseSpMatGetStridedBatch( spMatDescr, batchCount);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCooSetStridedBatch(cusparseSpMatDescr_t spMatDescr, int batchCount, int64_t batchStride)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCooSetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCooSetStridedBatch)(cusparseSpMatDescr_t spMatDescr, int batchCount, int64_t batchStride) = dlsym(RTLD_NEXT, "cusparseCooSetStridedBatch");
	returnVal = real_cusparseCooSetStridedBatch( spMatDescr, batchCount, batchStride);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseCsrSetStridedBatch(cusparseSpMatDescr_t spMatDescr, int batchCount, int64_t offsetsBatchStride, int64_t columnsValuesBatchStride)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsrSetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCsrSetStridedBatch)(cusparseSpMatDescr_t spMatDescr, int batchCount, int64_t offsetsBatchStride, int64_t columnsValuesBatchStride) = dlsym(RTLD_NEXT, "cusparseCsrSetStridedBatch");
	returnVal = real_cusparseCsrSetStridedBatch( spMatDescr, batchCount, offsetsBatchStride, columnsValuesBatchStride);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseSpMatGetAttribute(cusparseSpMatDescr_t spMatDescr, cusparseSpMatAttribute_t attribute, void* data, size_t dataSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatGetAttribute", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatGetAttribute)(cusparseSpMatDescr_t spMatDescr, cusparseSpMatAttribute_t attribute, void* data, size_t dataSize) = dlsym(RTLD_NEXT, "cusparseSpMatGetAttribute");
	returnVal = real_cusparseSpMatGetAttribute( spMatDescr, attribute, data, dataSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMatSetAttribute(cusparseSpMatDescr_t spMatDescr, cusparseSpMatAttribute_t attribute, void* data, size_t dataSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMatSetAttribute", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMatSetAttribute)(cusparseSpMatDescr_t spMatDescr, cusparseSpMatAttribute_t attribute, void* data, size_t dataSize) = dlsym(RTLD_NEXT, "cusparseSpMatSetAttribute");
	returnVal = real_cusparseSpMatSetAttribute( spMatDescr, attribute, data, dataSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsr(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* csrRowOffsets, void* csrColInd, void* csrValues, cusparseIndexType_t csrRowOffsetsType, cusparseIndexType_t csrColIndType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsr", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsr)(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* csrRowOffsets, void* csrColInd, void* csrValues, cusparseIndexType_t csrRowOffsetsType, cusparseIndexType_t csrColIndType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateCsr");
	returnVal = real_cusparseCreateCsr( spMatDescr, rows, cols, nnz, csrRowOffsets, csrColInd, csrValues, csrRowOffsetsType, csrColIndType, idxBase, valueType);
	armpl_logging_leave(&logger, rows);
	return returnVal;
}
cusparseStatus_t cusparseCreateCsc(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cscColOffsets, void* cscRowInd, void* cscValues, cusparseIndexType_t cscColOffsetsType, cusparseIndexType_t cscRowIndType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCsc", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCsc)(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cscColOffsets, void* cscRowInd, void* cscValues, cusparseIndexType_t cscColOffsetsType, cusparseIndexType_t cscRowIndType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateCsc");
	returnVal = real_cusparseCreateCsc( spMatDescr, rows, cols, nnz, cscColOffsets, cscRowInd, cscValues, cscColOffsetsType, cscRowIndType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsrGet(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz, void** csrRowOffsets, void** csrColInd, void** csrValues, cusparseIndexType_t* csrRowOffsetsType, cusparseIndexType_t* csrColIndType, cusparseIndexBase_t* idxBase, cudaDataType* valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsrGet", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCsrGet)(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz, void** csrRowOffsets, void** csrColInd, void** csrValues, cusparseIndexType_t* csrRowOffsetsType, cusparseIndexType_t* csrColIndType, cusparseIndexBase_t* idxBase, cudaDataType* valueType) = dlsym(RTLD_NEXT, "cusparseCsrGet");
	returnVal = real_cusparseCsrGet( spMatDescr, rows, cols, nnz, csrRowOffsets, csrColInd, csrValues, csrRowOffsetsType, csrColIndType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCsrSetPointers(cusparseSpMatDescr_t spMatDescr, void* csrRowOffsets, void* csrColInd, void* csrValues)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCsrSetPointers", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCsrSetPointers)(cusparseSpMatDescr_t spMatDescr, void* csrRowOffsets, void* csrColInd, void* csrValues) = dlsym(RTLD_NEXT, "cusparseCsrSetPointers");
	returnVal = real_cusparseCsrSetPointers( spMatDescr, csrRowOffsets, csrColInd, csrValues);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCscSetPointers(cusparseSpMatDescr_t spMatDescr, void* cscColOffsets, void* cscRowInd, void* cscValues)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCscSetPointers", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCscSetPointers)(cusparseSpMatDescr_t spMatDescr, void* cscColOffsets, void* cscRowInd, void* cscValues) = dlsym(RTLD_NEXT, "cusparseCscSetPointers");
	returnVal = real_cusparseCscSetPointers( spMatDescr, cscColOffsets, cscRowInd, cscValues);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateCoo(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cooRowInd, void* cooColInd, void* cooValues, cusparseIndexType_t cooIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCoo", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCoo)(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cooRowInd, void* cooColInd, void* cooValues, cusparseIndexType_t cooIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateCoo");
	returnVal = real_cusparseCreateCoo( spMatDescr, rows, cols, nnz, cooRowInd, cooColInd, cooValues, cooIdxType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCreateCooAoS(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cooInd, void* cooValues, cusparseIndexType_t cooIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateCooAoS", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCreateCooAoS)(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t nnz, void* cooInd, void* cooValues, cusparseIndexType_t cooIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateCooAoS");
	returnVal = real_cusparseCreateCooAoS( spMatDescr, rows, cols, nnz, cooInd, cooValues, cooIdxType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCooAoSGet(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz, void** cooInd,void** cooValues,cusparseIndexType_t* idxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCooAoSGet", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseCooAoSGet)(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* nnz, void** cooInd,void** cooValues,cusparseIndexType_t* idxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType) = dlsym(RTLD_NEXT, "cusparseCooAoSGet");
	returnVal = real_cusparseCooAoSGet( spMatDescr, rows, cols, nnz, cooInd, cooValues, idxType, idxBase, valueType);
	armpl_logging_leave(&logger, nnz);
	return returnVal;
}
cusparseStatus_t cusparseCooSetPointers(cusparseSpMatDescr_t spMatDescr, void* cooRows, void* cooColumns, void* cooValues)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCooSetPointers", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCooSetPointers)(cusparseSpMatDescr_t spMatDescr, void* cooRows, void* cooColumns, void* cooValues) = dlsym(RTLD_NEXT, "cusparseCooSetPointers");
	returnVal = real_cusparseCooSetPointers( spMatDescr, cooRows, cooColumns, cooValues);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateBlockedEll(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t ellBlockSize, int64_t ellCols, void* ellColInd, void* ellValue, cusparseIndexType_t ellIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateBlockedEll", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateBlockedEll)(cusparseSpMatDescr_t* spMatDescr, int64_t rows, int64_t cols, int64_t ellBlockSize, int64_t ellCols, void* ellColInd, void* ellValue, cusparseIndexType_t ellIdxType, cusparseIndexBase_t idxBase, cudaDataType valueType) = dlsym(RTLD_NEXT, "cusparseCreateBlockedEll");
	returnVal = real_cusparseCreateBlockedEll( spMatDescr, rows, cols, ellBlockSize, ellCols, ellColInd, ellValue, ellIdxType, idxBase, valueType);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseBlockedEllGet(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* ellBlockSize, int64_t* ellCols, void** ellColInd, void** ellValue, cusparseIndexType_t* ellIdxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseBlockedEllGet", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseBlockedEllGet)(cusparseSpMatDescr_t spMatDescr, int64_t* rows, int64_t* cols, int64_t* ellBlockSize, int64_t* ellCols, void** ellColInd, void** ellValue, cusparseIndexType_t* ellIdxType, cusparseIndexBase_t* idxBase, cudaDataType* valueType) = dlsym(RTLD_NEXT, "cusparseBlockedEllGet");
	returnVal = real_cusparseBlockedEllGet( spMatDescr, rows, cols, ellBlockSize, ellCols, ellColInd, ellValue, ellIdxType, idxBase, valueType);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseCreateDnMat(cusparseDnMatDescr_t* dnMatDescr, int64_t rows, int64_t cols, int64_t ld, void* values, cudaDataType valueType, cusparseOrder_t order)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseCreateDnMat", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseCreateDnMat)(cusparseDnMatDescr_t* dnMatDescr, int64_t rows, int64_t cols, int64_t ld, void* values, cudaDataType valueType, cusparseOrder_t order) = dlsym(RTLD_NEXT, "cusparseCreateDnMat");
	returnVal = real_cusparseCreateDnMat( dnMatDescr, rows, cols, ld, values, valueType, order);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDestroyDnMat(cusparseDnMatDescr_t dnMatDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDestroyDnMat", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDestroyDnMat)(cusparseDnMatDescr_t dnMatDescr) = dlsym(RTLD_NEXT, "cusparseDestroyDnMat");
	returnVal = real_cusparseDestroyDnMat( dnMatDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnMatGet(cusparseDnMatDescr_t dnMatDescr, int64_t* rows, int64_t* cols, int64_t* ld, void** values, cudaDataType* type, cusparseOrder_t* order)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnMatGet", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnMatGet)(cusparseDnMatDescr_t dnMatDescr, int64_t* rows, int64_t* cols, int64_t* ld, void** values, cudaDataType* type, cusparseOrder_t* order) = dlsym(RTLD_NEXT, "cusparseDnMatGet");
	returnVal = real_cusparseDnMatGet( dnMatDescr, rows, cols, ld, values, type, order);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnMatGetValues(cusparseDnMatDescr_t dnMatDescr, void** values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnMatGetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnMatGetValues)(cusparseDnMatDescr_t dnMatDescr, void** values) = dlsym(RTLD_NEXT, "cusparseDnMatGetValues");
	returnVal = real_cusparseDnMatGetValues( dnMatDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnMatSetValues(cusparseDnMatDescr_t dnMatDescr, void* values)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnMatSetValues", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDnMatSetValues)(cusparseDnMatDescr_t dnMatDescr, void* values) = dlsym(RTLD_NEXT, "cusparseDnMatSetValues");
	returnVal = real_cusparseDnMatSetValues( dnMatDescr, values);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDnMatSetStridedBatch(cusparseDnMatDescr_t dnMatDescr, int batchCount, int64_t batchStride)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnMatSetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDnMatSetStridedBatch)(cusparseDnMatDescr_t dnMatDescr, int batchCount, int64_t batchStride) = dlsym(RTLD_NEXT, "cusparseDnMatSetStridedBatch");
	returnVal = real_cusparseDnMatSetStridedBatch( dnMatDescr, batchCount, batchStride);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseDnMatGetStridedBatch(cusparseDnMatDescr_t dnMatDescr, int* batchCount, int64_t* batchStride)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDnMatGetStridedBatch", 0, 1, 0, 0);
	cusparseStatus_t (*real_cusparseDnMatGetStridedBatch)(cusparseDnMatDescr_t dnMatDescr, int* batchCount, int64_t* batchStride) = dlsym(RTLD_NEXT, "cusparseDnMatGetStridedBatch");
	returnVal = real_cusparseDnMatGetStridedBatch( dnMatDescr, batchCount, batchStride);
	armpl_logging_leave(&logger, batchCount);
	return returnVal;
}
cusparseStatus_t cusparseAxpby(cusparseHandle_t handle, const void* alpha, cusparseSpVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseAxpby", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseAxpby)(cusparseHandle_t handle, const void* alpha, cusparseSpVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY) = dlsym(RTLD_NEXT, "cusparseAxpby");
	returnVal = real_cusparseAxpby( handle, alpha, vecX, beta, vecY);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseGather(cusparseHandle_t handle, cusparseDnVecDescr_t vecY, cusparseSpVecDescr_t vecX)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseGather", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseGather)(cusparseHandle_t handle, cusparseDnVecDescr_t vecY, cusparseSpVecDescr_t vecX) = dlsym(RTLD_NEXT, "cusparseGather");
	returnVal = real_cusparseGather( handle, vecY, vecX);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseScatter(cusparseHandle_t handle, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseScatter", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseScatter)(cusparseHandle_t handle, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY) = dlsym(RTLD_NEXT, "cusparseScatter");
	returnVal = real_cusparseScatter( handle, vecX, vecY);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseRot(cusparseHandle_t handle, const void* c_coeff, const void* s_coeff, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseRot", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseRot)(cusparseHandle_t handle, const void* c_coeff, const void* s_coeff, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY) = dlsym(RTLD_NEXT, "cusparseRot");
	returnVal = real_cusparseRot( handle, c_coeff, s_coeff, vecX, vecY);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpVV_bufferSize(cusparseHandle_t handle, cusparseOperation_t opX, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY, const void* result, cudaDataType computeType, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVV_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpVV_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opX, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY, const void* result, cudaDataType computeType, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSpVV_bufferSize");
	returnVal = real_cusparseSpVV_bufferSize( handle, opX, vecX, vecY, result, computeType, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpVV(cusparseHandle_t handle, cusparseOperation_t opX, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY, void* result, cudaDataType computeType, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpVV", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpVV)(cusparseHandle_t handle, cusparseOperation_t opX, cusparseSpVecDescr_t vecX, cusparseDnVecDescr_t vecY, void* result, cudaDataType computeType, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpVV");
	returnVal = real_cusparseSpVV( handle, opX, vecX, vecY, result, computeType, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSparseToDense_bufferSize(cusparseHandle_t handle, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseSparseToDenseAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSparseToDense_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSparseToDense_bufferSize)(cusparseHandle_t handle, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseSparseToDenseAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSparseToDense_bufferSize");
	returnVal = real_cusparseSparseToDense_bufferSize( handle, matA, matB, alg, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDenseToSparse_bufferSize(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDenseToSparse_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDenseToSparse_bufferSize)(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseDenseToSparse_bufferSize");
	returnVal = real_cusparseDenseToSparse_bufferSize( handle, matA, matB, alg, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDenseToSparse_analysis(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDenseToSparse_analysis", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDenseToSparse_analysis)(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseDenseToSparse_analysis");
	returnVal = real_cusparseDenseToSparse_analysis( handle, matA, matB, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseDenseToSparse_convert(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseDenseToSparse_convert", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseDenseToSparse_convert)(cusparseHandle_t handle, cusparseDnMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseDenseToSparseAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseDenseToSparse_convert");
	returnVal = real_cusparseDenseToSparse_convert( handle, matA, matB, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMV(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpMVAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMV", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMV)(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpMVAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpMV");
	returnVal = real_cusparseSpMV( handle, opA, alpha, matA, vecX, beta, vecY, computeType, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMV_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpMVAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMV_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMV_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, const void* beta, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpMVAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSpMV_bufferSize");
	returnVal = real_cusparseSpMV_bufferSize( handle, opA, alpha, matA, vecX, beta, vecY, computeType, alg, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSV_createDescr(cusparseSpSVDescr_t* descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSV_createDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSV_createDescr)(cusparseSpSVDescr_t* descr) = dlsym(RTLD_NEXT, "cusparseSpSV_createDescr");
	returnVal = real_cusparseSpSV_createDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSV_destroyDescr(cusparseSpSVDescr_t descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSV_destroyDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSV_destroyDescr)(cusparseSpSVDescr_t descr) = dlsym(RTLD_NEXT, "cusparseSpSV_destroyDescr");
	returnVal = real_cusparseSpSV_destroyDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSV_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSV_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSV_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSpSV_bufferSize");
	returnVal = real_cusparseSpSV_bufferSize( handle, opA, alpha, matA, vecX, vecY, computeType, alg, spsvDescr, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSV_analysis(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSV_analysis", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSV_analysis)(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpSV_analysis");
	returnVal = real_cusparseSpSV_analysis( handle, opA, alpha, matA, vecX, vecY, computeType, alg, spsvDescr, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSV_solve(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSV_solve", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSV_solve)(cusparseHandle_t handle, cusparseOperation_t opA, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnVecDescr_t vecX, cusparseDnVecDescr_t vecY, cudaDataType computeType, cusparseSpSVAlg_t alg, cusparseSpSVDescr_t spsvDescr) = dlsym(RTLD_NEXT, "cusparseSpSV_solve");
	returnVal = real_cusparseSpSV_solve( handle, opA, alpha, matA, vecX, vecY, computeType, alg, spsvDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSM_createDescr(cusparseSpSMDescr_t* descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSM_createDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSM_createDescr)(cusparseSpSMDescr_t* descr) = dlsym(RTLD_NEXT, "cusparseSpSM_createDescr");
	returnVal = real_cusparseSpSM_createDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSM_destroyDescr(cusparseSpSMDescr_t descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSM_destroyDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSM_destroyDescr)(cusparseSpSMDescr_t descr) = dlsym(RTLD_NEXT, "cusparseSpSM_destroyDescr");
	returnVal = real_cusparseSpSM_destroyDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSM_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSM_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSM_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSpSM_bufferSize");
	returnVal = real_cusparseSpSM_bufferSize( handle, opA, opB, alpha, matA, matB, matC, computeType, alg, spsmDescr, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSM_analysis(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSM_analysis", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSM_analysis)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpSM_analysis");
	returnVal = real_cusparseSpSM_analysis( handle, opA, opB, alpha, matA, matB, matC, computeType, alg, spsmDescr, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpSM_solve(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpSM_solve", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpSM_solve)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpSMAlg_t alg, cusparseSpSMDescr_t spsmDescr) = dlsym(RTLD_NEXT, "cusparseSpSM_solve");
	returnVal = real_cusparseSpSM_solve( handle, opA, opB, alpha, matA, matB, matC, computeType, alg, spsmDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMM_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMM_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMM_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSpMM_bufferSize");
	returnVal = real_cusparseSpMM_bufferSize( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMM_preprocess(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMM_preprocess", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMM_preprocess)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpMM_preprocess");
	returnVal = real_cusparseSpMM_preprocess( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMM(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMM", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMM)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseDnMatDescr_t matC, cudaDataType computeType,cusparseSpMMAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpMM");
	returnVal = real_cusparseSpMM( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMM_createDescr(cusparseSpGEMMDescr_t* descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMM_createDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMM_createDescr)(cusparseSpGEMMDescr_t* descr) = dlsym(RTLD_NEXT, "cusparseSpGEMM_createDescr");
	returnVal = real_cusparseSpGEMM_createDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMM_destroyDescr(cusparseSpGEMMDescr_t descr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMM_destroyDescr", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMM_destroyDescr)(cusparseSpGEMMDescr_t descr) = dlsym(RTLD_NEXT, "cusparseSpGEMM_destroyDescr");
	returnVal = real_cusparseSpGEMM_destroyDescr( descr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMM_workEstimation(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize1, void* externalBuffer1)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMM_workEstimation", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMM_workEstimation)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize1, void* externalBuffer1) = dlsym(RTLD_NEXT, "cusparseSpGEMM_workEstimation");
	returnVal = real_cusparseSpGEMM_workEstimation( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, spgemmDescr, bufferSize1, externalBuffer1);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMM_compute(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize2, void* externalBuffer2)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMM_compute", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMM_compute)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize2, void* externalBuffer2) = dlsym(RTLD_NEXT, "cusparseSpGEMM_compute");
	returnVal = real_cusparseSpGEMM_compute( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, spgemmDescr, bufferSize2, externalBuffer2);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMM_copy(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMM_copy", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMM_copy)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr) = dlsym(RTLD_NEXT, "cusparseSpGEMM_copy");
	returnVal = real_cusparseSpGEMM_copy( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, spgemmDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMMreuse_workEstimation(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize1, void* externalBuffer1)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMMreuse_workEstimation", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMMreuse_workEstimation)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize1, void* externalBuffer1) = dlsym(RTLD_NEXT, "cusparseSpGEMMreuse_workEstimation");
	returnVal = real_cusparseSpGEMMreuse_workEstimation( handle, opA, opB, matA, matB, matC, alg, spgemmDescr, bufferSize1, externalBuffer1);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMMreuse_nnz(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize2, void* externalBuffer2, size_t* bufferSize3, void* externalBuffer3, size_t* bufferSize4, void* externalBuffer4)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMMreuse_nnz", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMMreuse_nnz)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize2, void* externalBuffer2, size_t* bufferSize3, void* externalBuffer3, size_t* bufferSize4, void* externalBuffer4) = dlsym(RTLD_NEXT, "cusparseSpGEMMreuse_nnz");
	returnVal = real_cusparseSpGEMMreuse_nnz( handle, opA, opB, matA, matB, matC, alg, spgemmDescr, bufferSize2, externalBuffer2, bufferSize3, externalBuffer3, bufferSize4, externalBuffer4);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMMreuse_copy(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize5, void* externalBuffer5)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMMreuse_copy", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMMreuse_copy)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, cusparseSpMatDescr_t matC, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr, size_t* bufferSize5, void* externalBuffer5) = dlsym(RTLD_NEXT, "cusparseSpGEMMreuse_copy");
	returnVal = real_cusparseSpGEMMreuse_copy( handle, opA, opB, matA, matB, matC, alg, spgemmDescr, bufferSize5, externalBuffer5);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpGEMMreuse_compute(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpGEMMreuse_compute", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpGEMMreuse_compute)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseSpMatDescr_t matA, cusparseSpMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSpGEMMAlg_t alg, cusparseSpGEMMDescr_t spgemmDescr) = dlsym(RTLD_NEXT, "cusparseSpGEMMreuse_compute");
	returnVal = real_cusparseSpGEMMreuse_compute( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, spgemmDescr);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseConstrainedGeMM(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseConstrainedGeMM", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseConstrainedGeMM)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseConstrainedGeMM");
	returnVal = real_cusparseConstrainedGeMM( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseConstrainedGeMM_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseConstrainedGeMM_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseConstrainedGeMM_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseConstrainedGeMM_bufferSize");
	returnVal = real_cusparseConstrainedGeMM_bufferSize( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSDDMM_bufferSize(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, size_t* bufferSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSDDMM_bufferSize", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSDDMM_bufferSize)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, size_t* bufferSize) = dlsym(RTLD_NEXT, "cusparseSDDMM_bufferSize");
	returnVal = real_cusparseSDDMM_bufferSize( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, bufferSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSDDMM_preprocess(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSDDMM_preprocess", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSDDMM_preprocess)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSDDMM_preprocess");
	returnVal = real_cusparseSDDMM_preprocess( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSDDMM(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSDDMM", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSDDMM)(cusparseHandle_t handle, cusparseOperation_t opA, cusparseOperation_t opB, const void* alpha, cusparseDnMatDescr_t matA, cusparseDnMatDescr_t matB, const void* beta, cusparseSpMatDescr_t matC, cudaDataType computeType, cusparseSDDMMAlg_t alg, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSDDMM");
	returnVal = real_cusparseSDDMM( handle, opA, opB, alpha, matA, matB, beta, matC, computeType, alg, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMMOp_createPlan(cusparseHandle_t handle, cusparseSpMMOpPlan_t* plan, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMOpAlg_t alg, const void* addOperationNvvmBuffer, size_t addOperationBufferSize, const void* mulOperationNvvmBuffer, size_t mulOperationBufferSize, const void* epilogueNvvmBuffer, size_t epilogueBufferSize, size_t* SpMMWorkspaceSize)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMMOp_createPlan", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMMOp_createPlan)(cusparseHandle_t handle, cusparseSpMMOpPlan_t* plan, cusparseOperation_t opA, cusparseOperation_t opB, cusparseSpMatDescr_t matA, cusparseDnMatDescr_t matB, cusparseDnMatDescr_t matC, cudaDataType computeType, cusparseSpMMOpAlg_t alg, const void* addOperationNvvmBuffer, size_t addOperationBufferSize, const void* mulOperationNvvmBuffer, size_t mulOperationBufferSize, const void* epilogueNvvmBuffer, size_t epilogueBufferSize, size_t* SpMMWorkspaceSize) = dlsym(RTLD_NEXT, "cusparseSpMMOp_createPlan");
	returnVal = real_cusparseSpMMOp_createPlan( handle, plan, opA, opB, matA, matB, matC, computeType, alg, addOperationNvvmBuffer, addOperationBufferSize, mulOperationNvvmBuffer, mulOperationBufferSize, epilogueNvvmBuffer, epilogueBufferSize, SpMMWorkspaceSize);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMMOp(cusparseSpMMOpPlan_t plan, void* externalBuffer)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMMOp", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMMOp)(cusparseSpMMOpPlan_t plan, void* externalBuffer) = dlsym(RTLD_NEXT, "cusparseSpMMOp");
	returnVal = real_cusparseSpMMOp( plan, externalBuffer);
	armpl_logging_leave(&logger);
	return returnVal;
}
cusparseStatus_t cusparseSpMMOp_destroyPlan(cusparseSpMMOpPlan_t plan)
{
	cusparseStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cusparseSpMMOp_destroyPlan", 0, 0, 0, 0);
	cusparseStatus_t (*real_cusparseSpMMOp_destroyPlan)(cusparseSpMMOpPlan_t plan) = dlsym(RTLD_NEXT, "cusparseSpMMOp_destroyPlan");
	returnVal = real_cusparseSpMMOp_destroyPlan( plan);
	armpl_logging_leave(&logger);
	return returnVal;
}
