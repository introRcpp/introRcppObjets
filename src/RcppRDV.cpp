#include <Rcpp.h>
#include "rdv.h"
using namespace Rcpp;

// [[Rcpp::export]]
XPtr<rdv> mkRDV(std::string lieu, int h, int m, int s) {
  // pointeur vers un rdv
  rdv * pRDV = new rdv(lieu, heure(h,m,s));
  // 'smart pointeur' 
  XPtr<rdv> xpRDV(pRDV);
  return xpRDV;
}

// [[Rcpp::export]]
std::string getLieu(XPtr<rdv> xpRDV) {
  // création d'une référence 
  rdv & RDV( *xpRDV.get() );
  // Utilisation de l'objet...
  return RDV.lieu;
}

// [[Rcpp::export]]
std::string getHeure(XPtr<rdv> xpRDV) {
  // création d'une référence 
  rdv & RDV( *xpRDV.get() );
  // Utilisation de l'objet...
  return RDV.string();
}
