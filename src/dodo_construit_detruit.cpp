#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_construit_detruit() {
  Rcout << "Création des dodos x, y, z\n";
  dodo x;
  x.print();
 
  dodo y(1, 5);
  y.print();
  
  dodo z(2, 7, true);
  z.print();
  Rcout << "Fin de la fonction, et destruction des dodos\n";
}
