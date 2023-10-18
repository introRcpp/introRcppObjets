#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_vecteur() {
  Rcout << "Création d'un vecteurs de 5 dodos :\n";
  std::vector<dodo> x(5, dodo(4,5));
  Rcout << "Le vecteur est construit.\n";
  Rcout << "Voici son troisième élément :\n";
  x[2].print();
  Rcout << "Fin de la fonction, et destruction du vecteur\n";
}
