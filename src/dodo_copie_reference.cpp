#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]] 
void dodo_copie_reference() {
  Rcout << "Création de x: ";
  dodo x(1,5,true);
  Rcout << "Création de y : ";
  dodo y(x);
  Rcout << "Création de z : ";
  dodo z = x;
  Rcout << "Création de la référence t :\n";
  dodo & t = x;
  Rcout << "Utilisation de la référence t :\n";
  t.print();
  Rcout << "Fin\n";
}

