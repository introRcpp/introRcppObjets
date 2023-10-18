#include <Rcpp.h>
#include <vector>
#include "debug.h"

#ifndef _dodo_
#define _dodo_

class dodo {
public:
  int a;
  int b;
  std::vector<int> vec;

  // constructeurs
  dodo() : a(1), b(2), vec(0) {
    Rcpp::Rcout << "Construction d'un dodo avec dodo()\n";    
  }
  dodo(int a0, int b0) : a(a0), b(b0), vec(0) {
    Rcpp::Rcout << "Construction d'un dodo avec dodo(a, b)\n"; 
  }
  dodo(int a0, int b0, bool z) : a(a0), b(b0), vec(0) {
    Rcpp::Rcout << "Construction d'un dodo avec dodo(a, b, z)\n";
    if(z) {
      for(int i = a; i < b; i++) {
        vec.push_back(i);
      }
    }
  }

  // constructeur par copie
  dodo(const dodo & x) : a(x.a), b(x.b), vec(x.vec) {
    Rcpp::Rcout << "Copie d'un dodo (a = " << a << ", b = " << b << ")\n";
  }

  // operateur "move"
  dodo(dodo && x) : a(std::move(x.a)), b(std::move(x.b)), vec(std::move(x.vec)) {
    Rcpp::Rcout << "Move d'un dodo (a = " << a << ", b = " << b << ")\n";
  }

  void print() {
    Rcpp::Rcout << "Dodo a = " << a << ", b = " << b << ", ";
    SHOWVEC(vec);
  }

  // destructeur
  ~dodo() {
    Rcpp::Rcout << "Destruction d'un dodo a = " << a ;
    Rcpp::Rcout << ", b = " << b << "\n";
  }
};

#endif
