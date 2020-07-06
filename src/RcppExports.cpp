// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// interface_function
Rcpp::List interface_function(Rcpp::NumericVector integration_times, SEXP ode_system, double relative_tolerance, Rcpp::NumericVector absolute_tolerances, std::string start, std::string lower, std::string upper, std::string states, int npop, int ngen, double error, std::string where_to_save_output_states, std::string where_to_save_output_parameter, std::string solvertype);
RcppExport SEXP _paropt_interface_function(SEXP integration_timesSEXP, SEXP ode_systemSEXP, SEXP relative_toleranceSEXP, SEXP absolute_tolerancesSEXP, SEXP startSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP statesSEXP, SEXP npopSEXP, SEXP ngenSEXP, SEXP errorSEXP, SEXP where_to_save_output_statesSEXP, SEXP where_to_save_output_parameterSEXP, SEXP solvertypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type integration_times(integration_timesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ode_system(ode_systemSEXP);
    Rcpp::traits::input_parameter< double >::type relative_tolerance(relative_toleranceSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type absolute_tolerances(absolute_tolerancesSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< std::string >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< std::string >::type states(statesSEXP);
    Rcpp::traits::input_parameter< int >::type npop(npopSEXP);
    Rcpp::traits::input_parameter< int >::type ngen(ngenSEXP);
    Rcpp::traits::input_parameter< double >::type error(errorSEXP);
    Rcpp::traits::input_parameter< std::string >::type where_to_save_output_states(where_to_save_output_statesSEXP);
    Rcpp::traits::input_parameter< std::string >::type where_to_save_output_parameter(where_to_save_output_parameterSEXP);
    Rcpp::traits::input_parameter< std::string >::type solvertype(solvertypeSEXP);
    rcpp_result_gen = Rcpp::wrap(interface_function(integration_times, ode_system, relative_tolerance, absolute_tolerances, start, lower, upper, states, npop, ngen, error, where_to_save_output_states, where_to_save_output_parameter, solvertype));
    return rcpp_result_gen;
END_RCPP
}
// ode_example
Rcpp::NumericVector ode_example(double t, std::vector<double> params, Rcpp::NumericVector y);
RcppExport SEXP _paropt_ode_example(SEXP tSEXP, SEXP paramsSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(ode_example(t, params, y));
    return rcpp_result_gen;
END_RCPP
}
// solve_ode_system
Rcpp::List solve_ode_system(Rcpp::NumericVector integration_times, SEXP ode_system, double relative_tolerance, Rcpp::NumericVector absolute_tolerances, std::string start, std::string states, std::string where_to_save_output_states, std::string solvertype);
RcppExport SEXP _paropt_solve_ode_system(SEXP integration_timesSEXP, SEXP ode_systemSEXP, SEXP relative_toleranceSEXP, SEXP absolute_tolerancesSEXP, SEXP startSEXP, SEXP statesSEXP, SEXP where_to_save_output_statesSEXP, SEXP solvertypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type integration_times(integration_timesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ode_system(ode_systemSEXP);
    Rcpp::traits::input_parameter< double >::type relative_tolerance(relative_toleranceSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type absolute_tolerances(absolute_tolerancesSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type states(statesSEXP);
    Rcpp::traits::input_parameter< std::string >::type where_to_save_output_states(where_to_save_output_statesSEXP);
    Rcpp::traits::input_parameter< std::string >::type solvertype(solvertypeSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_ode_system(integration_times, ode_system, relative_tolerance, absolute_tolerances, start, states, where_to_save_output_states, solvertype));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_paropt_interface_function", (DL_FUNC) &_paropt_interface_function, 14},
    {"_paropt_ode_example", (DL_FUNC) &_paropt_ode_example, 3},
    {"_paropt_solve_ode_system", (DL_FUNC) &_paropt_solve_ode_system, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_paropt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}