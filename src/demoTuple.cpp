#include <Rcpp.h>
#include "debug.h"

using namespace Rcpp;

std::tuple<int, int, double> f(int a) {
  int b = a*a;
  double c = 1.0 / (double) a;
  return std::make_tuple(a, b, c);
}


// [[Rcpp::export]]
void demoTuple() {
  std::tuple<int, int, double> x = f(4);
  auto y = f(5);
  SHOW(std::get<0>(x));  
  SHOW(std::get<1>(x));
  SHOW(std::get<2>(x));
  SHOW(std::get<2>(y));
}