// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// apply_transition_matrix
NumericMatrix apply_transition_matrix(NumericMatrix data_before, NumericMatrix data, NumericMatrix transition_matrix);
RcppExport SEXP _sits_apply_transition_matrix(SEXP data_beforeSEXP, SEXP dataSEXP, SEXP transition_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data_before(data_beforeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type transition_matrix(transition_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(apply_transition_matrix(data_before, data, transition_matrix));
    return rcpp_result_gen;
END_RCPP
}
// normalize_data
NumericMatrix normalize_data(const NumericMatrix& data, const double& quant_2, const double& quant_98);
RcppExport SEXP _sits_normalize_data(SEXP dataSEXP, SEXP quant_2SEXP, SEXP quant_98SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type quant_2(quant_2SEXP);
    Rcpp::traits::input_parameter< const double& >::type quant_98(quant_98SEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_data(data, quant_2, quant_98));
    return rcpp_result_gen;
END_RCPP
}
// preprocess_data
NumericMatrix preprocess_data(NumericMatrix data, const int& minimum_value, const double& scale_factor);
RcppExport SEXP _sits_preprocess_data(SEXP dataSEXP, SEXP minimum_valueSEXP, SEXP scale_factorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const int& >::type minimum_value(minimum_valueSEXP);
    Rcpp::traits::input_parameter< const double& >::type scale_factor(scale_factorSEXP);
    rcpp_result_gen = Rcpp::wrap(preprocess_data(data, minimum_value, scale_factor));
    return rcpp_result_gen;
END_RCPP
}
// smooth_estimator_class
NumericVector smooth_estimator_class(const NumericMatrix& data, const IntegerMatrix& window, const double& noise);
RcppExport SEXP _sits_smooth_estimator_class(SEXP dataSEXP, SEXP windowSEXP, SEXP noiseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const double& >::type noise(noiseSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_estimator_class(data, window, noise));
    return rcpp_result_gen;
END_RCPP
}
// scale_data
NumericMatrix scale_data(NumericMatrix data, const double& scale_factor, const double& adj_val);
RcppExport SEXP _sits_scale_data(SEXP dataSEXP, SEXP scale_factorSEXP, SEXP adj_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< const double& >::type adj_val(adj_valSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_data(data, scale_factor, adj_val));
    return rcpp_result_gen;
END_RCPP
}
// scale_matrix_integer
IntegerMatrix scale_matrix_integer(NumericMatrix data, const double& scale_factor);
RcppExport SEXP _sits_scale_matrix_integer(SEXP dataSEXP, SEXP scale_factorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type scale_factor(scale_factorSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_matrix_integer(data, scale_factor));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sits_apply_transition_matrix", (DL_FUNC) &_sits_apply_transition_matrix, 3},
    {"_sits_normalize_data", (DL_FUNC) &_sits_normalize_data, 3},
    {"_sits_preprocess_data", (DL_FUNC) &_sits_preprocess_data, 3},
    {"_sits_smooth_estimator_class", (DL_FUNC) &_sits_smooth_estimator_class, 3},
    {"_sits_scale_data", (DL_FUNC) &_sits_scale_data, 3},
    {"_sits_scale_matrix_integer", (DL_FUNC) &_sits_scale_matrix_integer, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_sits(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}