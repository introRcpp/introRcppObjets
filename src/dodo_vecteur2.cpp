#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_vecteur2() {
  dodo x(1,5,true);
  x.print();

  Rcout << "\n\nCréation d'un vecteur avec push_back (1)\n";
  {
    std::vector<dodo> V;
    V.reserve(4);
    for(int i = 0; i < 3; i++) {
      dodo x(i, i+4, true);
      V.push_back( x );
    }
    Rcout << "Fin du scope du vecteur\n";
  }

  Rcout << "\n\nCréation d'un vecteur avec push_back (2)\n";
  {
    std::vector<dodo> V;
    V.reserve(4);
    for(int i = 0; i < 3; i++) {
      V.push_back( dodo(i, i+4, true) );
    }
    Rcout << "Fin du scope du vecteur\n";
  }

  Rcout << "\n\nCréation d'un vecteur avec push_back, std::move\n";
  {
    std::vector<dodo> V;
    V.reserve(4);
    for(int i = 0; i < 3; i++) {
      dodo x(i, i+4, true);
      V.push_back( std::move(x) );
    }
    Rcout << "Fin du scope du vecteur\n";
  }

  Rcout << "\n\nCréation d'un vecteur avec emplace_back\n";
  {
    std::vector<dodo> V;
    V.reserve(4);
    for(int i = 0; i < 3; i++) {
      V.emplace_back( i, i+4, true );
    }
    Rcout << "Fin du scope du vecteur\n";
  }

  Rcout << "\n\n***fin**\n";
}
