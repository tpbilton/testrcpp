// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

SEXP ll_fs_scaled_err_c(SEXP r, SEXP ep, SEXP ref, SEXP alt, SEXP bcoef_mat, SEXP Kab, SEXP OPGP, SEXP nInd, SEXP nSnps, SEXP nThreads);

// convolve_cpp
NumericVector convolve_cpp(const NumericVector& a, const NumericVector& b);
RcppExport SEXP _testrcpp_convolve_cpp(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(convolve_cpp(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_testrcpp_convolve_cpp", (DL_FUNC) &_testrcpp_convolve_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_testrcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
