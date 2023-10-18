#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_boucle() {
  for(int i = 0; i < 3; i++) {
    dodo x(i, i+4);
    x.print();
  }
}
