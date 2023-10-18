#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_move() {
  Rcout << "Construction du dodo x : ";
  dodo x(1, 5, true);
  Rcout << "x = ";
  x.print();

  Rcout << "Move de x vers y : ";
  dodo y = std::move(x);
  Rcout << "x = ";
  x.print();
  Rcout << "y = ";
  y.print();
}
























