#include <Rcpp.h>
#include "heure.h"
#include "debug.h"
using namespace Rcpp;


// [[Rcpp::export]]
void testHeure() {
  heure H1;
  heure H2(12, 30, 31);
  std::string s1 = H1.string();
  std::string s2 = H2.string();
  SHOW(s1);
  SHOW(s2);
}

// [[Rcpp::export]]
void testHeureAddition() {
  heure H1(12, 15, 05);
  heure H2(0, 49, 12);
  SHOW( H1 );
  SHOW( H2 );
  Rcout << "H1 += H2\n";
  H1 += H2;
  SHOW( H1 );
  SHOW( H1 + H2 );
}

