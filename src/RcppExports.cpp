// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// single_to_k
StringVector single_to_k(StringVector seq, int k);
RcppExport SEXP _universalmotif_single_to_k(SEXP seqSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(single_to_k(seq, k));
    return rcpp_result_gen;
END_RCPP
}
// calc_scores_cpp
NumericVector calc_scores_cpp(NumericMatrix paths, NumericMatrix score_mat);
RcppExport SEXP _universalmotif_calc_scores_cpp(SEXP pathsSEXP, SEXP score_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type paths(pathsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type score_mat(score_matSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_scores_cpp(paths, score_mat));
    return rcpp_result_gen;
END_RCPP
}
// kmer_mat_to_probs_k1_cpp
NumericVector kmer_mat_to_probs_k1_cpp(NumericMatrix bb_mat, NumericVector bkg, NumericMatrix alph_sort);
RcppExport SEXP _universalmotif_kmer_mat_to_probs_k1_cpp(SEXP bb_matSEXP, SEXP bkgSEXP, SEXP alph_sortSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type bb_mat(bb_matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type alph_sort(alph_sortSEXP);
    rcpp_result_gen = Rcpp::wrap(kmer_mat_to_probs_k1_cpp(bb_mat, bkg, alph_sort));
    return rcpp_result_gen;
END_RCPP
}
// init_paths_cpp
NumericMatrix init_paths_cpp(NumericMatrix score_mat, double score, double max_score);
RcppExport SEXP _universalmotif_init_paths_cpp(SEXP score_matSEXP, SEXP scoreSEXP, SEXP max_scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type score_mat(score_matSEXP);
    Rcpp::traits::input_parameter< double >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< double >::type max_score(max_scoreSEXP);
    rcpp_result_gen = Rcpp::wrap(init_paths_cpp(score_mat, score, max_score));
    return rcpp_result_gen;
END_RCPP
}
// calc_next_subworker_cpp
NumericMatrix calc_next_subworker_cpp(NumericMatrix paths_totry, NumericVector scores_tmp, double score);
RcppExport SEXP _universalmotif_calc_next_subworker_cpp(SEXP paths_totrySEXP, SEXP scores_tmpSEXP, SEXP scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type paths_totry(paths_totrySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scores_tmp(scores_tmpSEXP);
    Rcpp::traits::input_parameter< double >::type score(scoreSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_next_subworker_cpp(paths_totry, scores_tmp, score));
    return rcpp_result_gen;
END_RCPP
}
// list_to_matrix
NumericMatrix list_to_matrix(List paths);
RcppExport SEXP _universalmotif_list_to_matrix(SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(list_to_matrix(paths));
    return rcpp_result_gen;
END_RCPP
}
// calc_next_path_cpp
NumericMatrix calc_next_path_cpp(NumericMatrix score_mat, NumericMatrix paths, double score, double max_score);
RcppExport SEXP _universalmotif_calc_next_path_cpp(SEXP score_matSEXP, SEXP pathsSEXP, SEXP scoreSEXP, SEXP max_scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type score_mat(score_matSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type paths(pathsSEXP);
    Rcpp::traits::input_parameter< double >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< double >::type max_score(max_scoreSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_next_path_cpp(score_mat, paths, score, max_score));
    return rcpp_result_gen;
END_RCPP
}
// calc_final_probs_cpp
NumericVector calc_final_probs_cpp(List all_probs, List all_scores, double score);
RcppExport SEXP _universalmotif_calc_final_probs_cpp(SEXP all_probsSEXP, SEXP all_scoresSEXP, SEXP scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type all_probs(all_probsSEXP);
    Rcpp::traits::input_parameter< List >::type all_scores(all_scoresSEXP);
    Rcpp::traits::input_parameter< double >::type score(scoreSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_final_probs_cpp(all_probs, all_scores, score));
    return rcpp_result_gen;
END_RCPP
}
// motif_simil_internal
double motif_simil_internal(NumericMatrix mot1, NumericMatrix mot2, StringVector method);
RcppExport SEXP _universalmotif_motif_simil_internal(SEXP mot1SEXP, SEXP mot2SEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mot1(mot1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mot2(mot2SEXP);
    Rcpp::traits::input_parameter< StringVector >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(motif_simil_internal(mot1, mot2, method));
    return rcpp_result_gen;
END_RCPP
}
// score_seq
double score_seq(IntegerVector tmp_seq, NumericMatrix score_mat);
RcppExport SEXP _universalmotif_score_seq(SEXP tmp_seqSEXP, SEXP score_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type tmp_seq(tmp_seqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type score_mat(score_matSEXP);
    rcpp_result_gen = Rcpp::wrap(score_seq(tmp_seq, score_mat));
    return rcpp_result_gen;
END_RCPP
}
// scan_seq_internal
NumericVector scan_seq_internal(IntegerVector sequence, NumericMatrix score_mat, double min_score);
RcppExport SEXP _universalmotif_scan_seq_internal(SEXP sequenceSEXP, SEXP score_matSEXP, SEXP min_scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type score_mat(score_matSEXP);
    Rcpp::traits::input_parameter< double >::type min_score(min_scoreSEXP);
    rcpp_result_gen = Rcpp::wrap(scan_seq_internal(sequence, score_mat, min_score));
    return rcpp_result_gen;
END_RCPP
}
// LETTER_to_int
IntegerVector LETTER_to_int(IntegerVector seqs, int k, IntegerVector letters);
RcppExport SEXP _universalmotif_LETTER_to_int(SEXP seqsSEXP, SEXP kSEXP, SEXP lettersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type letters(lettersSEXP);
    rcpp_result_gen = Rcpp::wrap(LETTER_to_int(seqs, k, letters));
    return rcpp_result_gen;
END_RCPP
}
// string_to_factor
IntegerVector string_to_factor(StringVector x, StringVector y);
RcppExport SEXP _universalmotif_string_to_factor(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< StringVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(string_to_factor(x, y));
    return rcpp_result_gen;
END_RCPP
}
// res_to_index
IntegerVector res_to_index(IntegerVector x);
RcppExport SEXP _universalmotif_res_to_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(res_to_index(x));
    return rcpp_result_gen;
END_RCPP
}
// pcm_to_ppmC
NumericVector pcm_to_ppmC(NumericVector position, double pseudocount);
RcppExport SEXP _universalmotif_pcm_to_ppmC(SEXP positionSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(pcm_to_ppmC(position, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// ppm_to_pcmC
NumericVector ppm_to_pcmC(NumericVector position, double nsites);
RcppExport SEXP _universalmotif_ppm_to_pcmC(SEXP positionSEXP, SEXP nsitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< double >::type nsites(nsitesSEXP);
    rcpp_result_gen = Rcpp::wrap(ppm_to_pcmC(position, nsites));
    return rcpp_result_gen;
END_RCPP
}
// ppm_to_pwmC
NumericVector ppm_to_pwmC(NumericVector position, NumericVector bkg, double pseudocount, double nsites);
RcppExport SEXP _universalmotif_ppm_to_pwmC(SEXP positionSEXP, SEXP bkgSEXP, SEXP pseudocountSEXP, SEXP nsitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    Rcpp::traits::input_parameter< double >::type nsites(nsitesSEXP);
    rcpp_result_gen = Rcpp::wrap(ppm_to_pwmC(position, bkg, pseudocount, nsites));
    return rcpp_result_gen;
END_RCPP
}
// pwm_to_ppmC
NumericVector pwm_to_ppmC(NumericVector position, NumericVector bkg);
RcppExport SEXP _universalmotif_pwm_to_ppmC(SEXP positionSEXP, SEXP bkgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    rcpp_result_gen = Rcpp::wrap(pwm_to_ppmC(position, bkg));
    return rcpp_result_gen;
END_RCPP
}
// ppm_to_icmC
NumericVector ppm_to_icmC(NumericVector position, NumericVector bkg, bool relative_entropy);
RcppExport SEXP _universalmotif_ppm_to_icmC(SEXP positionSEXP, SEXP bkgSEXP, SEXP relative_entropySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    Rcpp::traits::input_parameter< bool >::type relative_entropy(relative_entropySEXP);
    rcpp_result_gen = Rcpp::wrap(ppm_to_icmC(position, bkg, relative_entropy));
    return rcpp_result_gen;
END_RCPP
}
// position_icscoreC
double position_icscoreC(NumericVector position, NumericVector bkg, String type, double pseudocount, double nsites, bool relative_entropy);
RcppExport SEXP _universalmotif_position_icscoreC(SEXP positionSEXP, SEXP bkgSEXP, SEXP typeSEXP, SEXP pseudocountSEXP, SEXP nsitesSEXP, SEXP relative_entropySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    Rcpp::traits::input_parameter< String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    Rcpp::traits::input_parameter< double >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< bool >::type relative_entropy(relative_entropySEXP);
    rcpp_result_gen = Rcpp::wrap(position_icscoreC(position, bkg, type, pseudocount, nsites, relative_entropy));
    return rcpp_result_gen;
END_RCPP
}
// icm_to_ppmC
NumericVector icm_to_ppmC(NumericVector position);
RcppExport SEXP _universalmotif_icm_to_ppmC(SEXP positionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    rcpp_result_gen = Rcpp::wrap(icm_to_ppmC(position));
    return rcpp_result_gen;
END_RCPP
}
// get_consensusC
String get_consensusC(NumericVector position, String alphabet, String type, double pseudocount);
RcppExport SEXP _universalmotif_get_consensusC(SEXP positionSEXP, SEXP alphabetSEXP, SEXP typeSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< String >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(get_consensusC(position, alphabet, type, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// consensus_to_ppmC
NumericVector consensus_to_ppmC(String letter);
RcppExport SEXP _universalmotif_consensus_to_ppmC(SEXP letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type letter(letterSEXP);
    rcpp_result_gen = Rcpp::wrap(consensus_to_ppmC(letter));
    return rcpp_result_gen;
END_RCPP
}
// consensus_to_ppmAAC
NumericVector consensus_to_ppmAAC(String letter);
RcppExport SEXP _universalmotif_consensus_to_ppmAAC(SEXP letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type letter(letterSEXP);
    rcpp_result_gen = Rcpp::wrap(consensus_to_ppmAAC(letter));
    return rcpp_result_gen;
END_RCPP
}
// get_consensusAAC
String get_consensusAAC(NumericVector position, String type, double pseudocount);
RcppExport SEXP _universalmotif_get_consensusAAC(SEXP positionSEXP, SEXP typeSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(get_consensusAAC(position, type, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// universalmotif_cpp
S4 universalmotif_cpp(NumericMatrix motif, String name, StringVector altname, StringVector family, StringVector organism, StringVector alphabet, StringVector type, NumericVector icscore, NumericVector nsites, double pseudocount, NumericVector bkg, NumericVector bkgsites, StringVector consensus, String strand, NumericVector pval, NumericVector qval, NumericVector eval, StringVector extrainfo);
RcppExport SEXP _universalmotif_universalmotif_cpp(SEXP motifSEXP, SEXP nameSEXP, SEXP altnameSEXP, SEXP familySEXP, SEXP organismSEXP, SEXP alphabetSEXP, SEXP typeSEXP, SEXP icscoreSEXP, SEXP nsitesSEXP, SEXP pseudocountSEXP, SEXP bkgSEXP, SEXP bkgsitesSEXP, SEXP consensusSEXP, SEXP strandSEXP, SEXP pvalSEXP, SEXP qvalSEXP, SEXP evalSEXP, SEXP extrainfoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type motif(motifSEXP);
    Rcpp::traits::input_parameter< String >::type name(nameSEXP);
    Rcpp::traits::input_parameter< StringVector >::type altname(altnameSEXP);
    Rcpp::traits::input_parameter< StringVector >::type family(familySEXP);
    Rcpp::traits::input_parameter< StringVector >::type organism(organismSEXP);
    Rcpp::traits::input_parameter< StringVector >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< StringVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type icscore(icscoreSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkg(bkgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bkgsites(bkgsitesSEXP);
    Rcpp::traits::input_parameter< StringVector >::type consensus(consensusSEXP);
    Rcpp::traits::input_parameter< String >::type strand(strandSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pval(pvalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qval(qvalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eval(evalSEXP);
    Rcpp::traits::input_parameter< StringVector >::type extrainfo(extrainfoSEXP);
    rcpp_result_gen = Rcpp::wrap(universalmotif_cpp(motif, name, altname, family, organism, alphabet, type, icscore, nsites, pseudocount, bkg, bkgsites, consensus, strand, pval, qval, eval, extrainfo));
    return rcpp_result_gen;
END_RCPP
}
// validObject_universalmotif
StringVector validObject_universalmotif(S4 motif);
RcppExport SEXP _universalmotif_validObject_universalmotif(SEXP motifSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type motif(motifSEXP);
    rcpp_result_gen = Rcpp::wrap(validObject_universalmotif(motif));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_universalmotif_single_to_k", (DL_FUNC) &_universalmotif_single_to_k, 2},
    {"_universalmotif_calc_scores_cpp", (DL_FUNC) &_universalmotif_calc_scores_cpp, 2},
    {"_universalmotif_kmer_mat_to_probs_k1_cpp", (DL_FUNC) &_universalmotif_kmer_mat_to_probs_k1_cpp, 3},
    {"_universalmotif_init_paths_cpp", (DL_FUNC) &_universalmotif_init_paths_cpp, 3},
    {"_universalmotif_calc_next_subworker_cpp", (DL_FUNC) &_universalmotif_calc_next_subworker_cpp, 3},
    {"_universalmotif_list_to_matrix", (DL_FUNC) &_universalmotif_list_to_matrix, 1},
    {"_universalmotif_calc_next_path_cpp", (DL_FUNC) &_universalmotif_calc_next_path_cpp, 4},
    {"_universalmotif_calc_final_probs_cpp", (DL_FUNC) &_universalmotif_calc_final_probs_cpp, 3},
    {"_universalmotif_motif_simil_internal", (DL_FUNC) &_universalmotif_motif_simil_internal, 3},
    {"_universalmotif_score_seq", (DL_FUNC) &_universalmotif_score_seq, 2},
    {"_universalmotif_scan_seq_internal", (DL_FUNC) &_universalmotif_scan_seq_internal, 3},
    {"_universalmotif_LETTER_to_int", (DL_FUNC) &_universalmotif_LETTER_to_int, 3},
    {"_universalmotif_string_to_factor", (DL_FUNC) &_universalmotif_string_to_factor, 2},
    {"_universalmotif_res_to_index", (DL_FUNC) &_universalmotif_res_to_index, 1},
    {"_universalmotif_pcm_to_ppmC", (DL_FUNC) &_universalmotif_pcm_to_ppmC, 2},
    {"_universalmotif_ppm_to_pcmC", (DL_FUNC) &_universalmotif_ppm_to_pcmC, 2},
    {"_universalmotif_ppm_to_pwmC", (DL_FUNC) &_universalmotif_ppm_to_pwmC, 4},
    {"_universalmotif_pwm_to_ppmC", (DL_FUNC) &_universalmotif_pwm_to_ppmC, 2},
    {"_universalmotif_ppm_to_icmC", (DL_FUNC) &_universalmotif_ppm_to_icmC, 3},
    {"_universalmotif_position_icscoreC", (DL_FUNC) &_universalmotif_position_icscoreC, 6},
    {"_universalmotif_icm_to_ppmC", (DL_FUNC) &_universalmotif_icm_to_ppmC, 1},
    {"_universalmotif_get_consensusC", (DL_FUNC) &_universalmotif_get_consensusC, 4},
    {"_universalmotif_consensus_to_ppmC", (DL_FUNC) &_universalmotif_consensus_to_ppmC, 1},
    {"_universalmotif_consensus_to_ppmAAC", (DL_FUNC) &_universalmotif_consensus_to_ppmAAC, 1},
    {"_universalmotif_get_consensusAAC", (DL_FUNC) &_universalmotif_get_consensusAAC, 3},
    {"_universalmotif_universalmotif_cpp", (DL_FUNC) &_universalmotif_universalmotif_cpp, 18},
    {"_universalmotif_validObject_universalmotif", (DL_FUNC) &_universalmotif_validObject_universalmotif, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_universalmotif(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
