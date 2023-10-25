#include <Rcpp.h>
#include "dodo.h"
#include "debug.h"
#include <memory>
using namespace Rcpp;

// [[Rcpp::export]]
void dodo_shared_ptrs() {
  {
    Rcout << "Création de pdodo avec make_shared ; ";
    std::shared_ptr<dodo> pdodo = std::make_shared<dodo>(2, 8);
    SHOW( pdodo.use_count() )
    Rcout << "Appel pdodo->print() : ";
    pdodo->print();
    {
      Rcout << "Copie du shared pointer avec pdodo2(pdodo)\n"; 
      std::shared_ptr<dodo> pdodo2(pdodo);
      SHOW( pdodo.use_count() )
      SHOW( pdodo2.use_count() )
      Rcout << "destruction de pdodo2\n";
    }
    SHOW( pdodo.use_count() )
    {
      Rcout << "Move (?) du shared pointer avec pdodo2(std::move(pdodo))\n"; 
      std::shared_ptr<dodo> pdodo2(std::move(pdodo));
      SHOW( pdodo.use_count() )
      SHOW( pdodo2.use_count() )
      Rcout << "destruction de pdodo2\n";
    }
    SHOW( pdodo.use_count() )  
    // SURTOUT PAS ! (segfault)
    // Rcout << "Appel pdodo->print() : ";
    // pdodo->print();
    Rcout << "Destruction de pdodo ; ";
  }
  Rcout << "Fin\n";
}
