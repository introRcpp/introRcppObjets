#include <Rcpp.h>
#include "rdv.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void demoRDV() {
  rdv x("Pantheon", heure(12,0,0));
  SHOW(x);
  Rcout << "x += heure(1,23,0)\n";
  x += heure(1,23,0);
  SHOW(x);
}