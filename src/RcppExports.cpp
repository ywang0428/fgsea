// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calcGseaStatCumulativeBatch
List calcGseaStatCumulativeBatch(NumericVector const& stats, double gseaParam, NumericVector const& pathwayScores, IntegerVector const& pathwaysSizes, int iterations, int seed, std::string scoreType);
RcppExport SEXP _fgsea_calcGseaStatCumulativeBatch(SEXP statsSEXP, SEXP gseaParamSEXP, SEXP pathwayScoresSEXP, SEXP pathwaysSizesSEXP, SEXP iterationsSEXP, SEXP seedSEXP, SEXP scoreTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< double >::type gseaParam(gseaParamSEXP);
    Rcpp::traits::input_parameter< NumericVector const& >::type pathwayScores(pathwayScoresSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type pathwaysSizes(pathwaysSizesSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< std::string >::type scoreType(scoreTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatCumulativeBatch(stats, gseaParam, pathwayScores, pathwaysSizes, iterations, seed, scoreType));
    return rcpp_result_gen;
END_RCPP
}
// calcGseaStatCumulative
NumericVector calcGseaStatCumulative(NumericVector const& stats, IntegerVector const& selectedStats, double gseaParam, std::string scoreType);
RcppExport SEXP _fgsea_calcGseaStatCumulative(SEXP statsSEXP, SEXP selectedStatsSEXP, SEXP gseaParamSEXP, SEXP scoreTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type selectedStats(selectedStatsSEXP);
    Rcpp::traits::input_parameter< double >::type gseaParam(gseaParamSEXP);
    Rcpp::traits::input_parameter< std::string >::type scoreType(scoreTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatCumulative(stats, selectedStats, gseaParam, scoreType));
    return rcpp_result_gen;
END_RCPP
}
// calcGseaStatBatchCpp
NumericVector calcGseaStatBatchCpp(NumericVector const& stats, List const& selectedGenes, IntegerVector const& geneRanks);
RcppExport SEXP _fgsea_calcGseaStatBatchCpp(SEXP statsSEXP, SEXP selectedGenesSEXP, SEXP geneRanksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector const& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< List const& >::type selectedGenes(selectedGenesSEXP);
    Rcpp::traits::input_parameter< IntegerVector const& >::type geneRanks(geneRanksSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGseaStatBatchCpp(stats, selectedGenes, geneRanks));
    return rcpp_result_gen;
END_RCPP
}
// fgseaMultilevelCpp
DataFrame fgseaMultilevelCpp(const NumericVector& enrichmentScores, const NumericVector& ranks, int pathwaySize, int sampleSize, int seed, double eps, bool sign);
RcppExport SEXP _fgsea_fgseaMultilevelCpp(SEXP enrichmentScoresSEXP, SEXP ranksSEXP, SEXP pathwaySizeSEXP, SEXP sampleSizeSEXP, SEXP seedSEXP, SEXP epsSEXP, SEXP signSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type enrichmentScores(enrichmentScoresSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ranks(ranksSEXP);
    Rcpp::traits::input_parameter< int >::type pathwaySize(pathwaySizeSEXP);
    Rcpp::traits::input_parameter< int >::type sampleSize(sampleSizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type sign(signSEXP);
    rcpp_result_gen = Rcpp::wrap(fgseaMultilevelCpp(enrichmentScores, ranks, pathwaySize, sampleSize, seed, eps, sign));
    return rcpp_result_gen;
END_RCPP
}
// gesecaCpp
NumericVector gesecaCpp(const NumericMatrix& E, const NumericVector& inpScores, unsigned genesetSize, unsigned sampleSize, int seed, double eps);
RcppExport SEXP _fgsea_gesecaCpp(SEXP ESEXP, SEXP inpScoresSEXP, SEXP genesetSizeSEXP, SEXP sampleSizeSEXP, SEXP seedSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type E(ESEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type inpScores(inpScoresSEXP);
    Rcpp::traits::input_parameter< unsigned >::type genesetSize(genesetSizeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type sampleSize(sampleSizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(gesecaCpp(E, inpScores, genesetSize, sampleSize, seed, eps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fgsea_calcGseaStatCumulativeBatch", (DL_FUNC) &_fgsea_calcGseaStatCumulativeBatch, 7},
    {"_fgsea_calcGseaStatCumulative", (DL_FUNC) &_fgsea_calcGseaStatCumulative, 4},
    {"_fgsea_calcGseaStatBatchCpp", (DL_FUNC) &_fgsea_calcGseaStatBatchCpp, 3},
    {"_fgsea_fgseaMultilevelCpp", (DL_FUNC) &_fgsea_fgseaMultilevelCpp, 7},
    {"_fgsea_gesecaCpp", (DL_FUNC) &_fgsea_gesecaCpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fgsea(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
