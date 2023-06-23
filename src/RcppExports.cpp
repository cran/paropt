// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/paropt_types.h"
#include <Rcpp.h>
#include <RcppArmadillo.h>
#include <RcppThread.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true> &Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false> &Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_default_error_fct
Rcpp::XPtr<error_calc_fct> get_default_error_fct();
RcppExport SEXP _paropt_get_default_error_fct() {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  rcpp_result_gen = Rcpp::wrap(get_default_error_fct());
  return rcpp_result_gen;
  END_RCPP
}
// get_default_spline_fct
Rcpp::XPtr<spline_fct> get_default_spline_fct();
RcppExport SEXP _paropt_get_default_spline_fct() {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  rcpp_result_gen = Rcpp::wrap(get_default_spline_fct());
  return rcpp_result_gen;
  END_RCPP
}
// get_mock_jac_fct
Rcpp::XPtr<JAC> get_mock_jac_fct();
RcppExport SEXP _paropt_get_mock_jac_fct() {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  rcpp_result_gen = Rcpp::wrap(get_mock_jac_fct());
  return rcpp_result_gen;
  END_RCPP
}
// wrapper_optimizer
Rcpp::List wrapper_optimizer(
    vd &init_state, vd &par_times, vi &param_idx_cuts, vd &lb_, vd &ub_,
    vd &state_measured, vi &state_idx_cuts, vd &integration_times,
    double reltol, vd &absolute_tolerances, Rcpp::XPtr<OS> fct, int nswarm,
    int ngen, double error, int solvertype, Rcpp::XPtr<error_calc_fct> ecf,
    Rcpp::XPtr<spline_fct> sf, Rcpp::XPtr<JAC> jf, int number_threads);
RcppExport SEXP _paropt_wrapper_optimizer(
    SEXP init_stateSEXP, SEXP par_timesSEXP, SEXP param_idx_cutsSEXP,
    SEXP lb_SEXP, SEXP ub_SEXP, SEXP state_measuredSEXP,
    SEXP state_idx_cutsSEXP, SEXP integration_timesSEXP, SEXP reltolSEXP,
    SEXP absolute_tolerancesSEXP, SEXP fctSEXP, SEXP nswarmSEXP, SEXP ngenSEXP,
    SEXP errorSEXP, SEXP solvertypeSEXP, SEXP ecfSEXP, SEXP sfSEXP, SEXP jfSEXP,
    SEXP number_threadsSEXP) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<vd &>::type init_state(init_stateSEXP);
  Rcpp::traits::input_parameter<vd &>::type par_times(par_timesSEXP);
  Rcpp::traits::input_parameter<vi &>::type param_idx_cuts(param_idx_cutsSEXP);
  Rcpp::traits::input_parameter<vd &>::type lb_(lb_SEXP);
  Rcpp::traits::input_parameter<vd &>::type ub_(ub_SEXP);
  Rcpp::traits::input_parameter<vd &>::type state_measured(state_measuredSEXP);
  Rcpp::traits::input_parameter<vi &>::type state_idx_cuts(state_idx_cutsSEXP);
  Rcpp::traits::input_parameter<vd &>::type integration_times(
      integration_timesSEXP);
  Rcpp::traits::input_parameter<double>::type reltol(reltolSEXP);
  Rcpp::traits::input_parameter<vd &>::type absolute_tolerances(
      absolute_tolerancesSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<OS>>::type fct(fctSEXP);
  Rcpp::traits::input_parameter<int>::type nswarm(nswarmSEXP);
  Rcpp::traits::input_parameter<int>::type ngen(ngenSEXP);
  Rcpp::traits::input_parameter<double>::type error(errorSEXP);
  Rcpp::traits::input_parameter<int>::type solvertype(solvertypeSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<error_calc_fct>>::type ecf(ecfSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<spline_fct>>::type sf(sfSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<JAC>>::type jf(jfSEXP);
  Rcpp::traits::input_parameter<int>::type number_threads(number_threadsSEXP);
  rcpp_result_gen = Rcpp::wrap(wrapper_optimizer(
      init_state, par_times, param_idx_cuts, lb_, ub_, state_measured,
      state_idx_cuts, integration_times, reltol, absolute_tolerances, fct,
      nswarm, ngen, error, solvertype, ecf, sf, jf, number_threads));
  return rcpp_result_gen;
  END_RCPP
}
// wrapper_solver
Rcpp::List wrapper_solver(vd &init_state, vd &par_times, vi &param_idx_cuts,
                          vd &parameter_vec, vd &state_measured,
                          vi &state_idx_cuts, vd &integration_times,
                          double reltol, vd &absolute_tolerances,
                          Rcpp::XPtr<OS> fct, int solvertype,
                          Rcpp::XPtr<error_calc_fct> ecf,
                          Rcpp::XPtr<spline_fct> sf, Rcpp::XPtr<JAC> jf);
RcppExport SEXP _paropt_wrapper_solver(
    SEXP init_stateSEXP, SEXP par_timesSEXP, SEXP param_idx_cutsSEXP,
    SEXP parameter_vecSEXP, SEXP state_measuredSEXP, SEXP state_idx_cutsSEXP,
    SEXP integration_timesSEXP, SEXP reltolSEXP, SEXP absolute_tolerancesSEXP,
    SEXP fctSEXP, SEXP solvertypeSEXP, SEXP ecfSEXP, SEXP sfSEXP, SEXP jfSEXP) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<vd &>::type init_state(init_stateSEXP);
  Rcpp::traits::input_parameter<vd &>::type par_times(par_timesSEXP);
  Rcpp::traits::input_parameter<vi &>::type param_idx_cuts(param_idx_cutsSEXP);
  Rcpp::traits::input_parameter<vd &>::type parameter_vec(parameter_vecSEXP);
  Rcpp::traits::input_parameter<vd &>::type state_measured(state_measuredSEXP);
  Rcpp::traits::input_parameter<vi &>::type state_idx_cuts(state_idx_cutsSEXP);
  Rcpp::traits::input_parameter<vd &>::type integration_times(
      integration_timesSEXP);
  Rcpp::traits::input_parameter<double>::type reltol(reltolSEXP);
  Rcpp::traits::input_parameter<vd &>::type absolute_tolerances(
      absolute_tolerancesSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<OS>>::type fct(fctSEXP);
  Rcpp::traits::input_parameter<int>::type solvertype(solvertypeSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<error_calc_fct>>::type ecf(ecfSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<spline_fct>>::type sf(sfSEXP);
  Rcpp::traits::input_parameter<Rcpp::XPtr<JAC>>::type jf(jfSEXP);
  rcpp_result_gen = Rcpp::wrap(
      wrapper_solver(init_state, par_times, param_idx_cuts, parameter_vec,
                     state_measured, state_idx_cuts, integration_times, reltol,
                     absolute_tolerances, fct, solvertype, ecf, sf, jf));
  return rcpp_result_gen;
  END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_paropt_get_default_error_fct", (DL_FUNC)&_paropt_get_default_error_fct,
     0},
    {"_paropt_get_default_spline_fct", (DL_FUNC)&_paropt_get_default_spline_fct,
     0},
    {"_paropt_get_mock_jac_fct", (DL_FUNC)&_paropt_get_mock_jac_fct, 0},
    {"_paropt_wrapper_optimizer", (DL_FUNC)&_paropt_wrapper_optimizer, 19},
    {"_paropt_wrapper_solver", (DL_FUNC)&_paropt_wrapper_solver, 14},
    {NULL, NULL, 0}};

RcppExport void R_init_paropt(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
