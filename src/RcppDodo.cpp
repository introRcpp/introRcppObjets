#include <Rcpp.h>
#include "dodo.h"
using namespace Rcpp;

// Ceci renvoie bien un pointeur mais le dodo est détruit
//[[Rcpp::export]]
XPtr<dodo> mkDodo1(int a, int b) {
  Rcout << "Création du dodo x : ";
  dodo x(a, b);
  // création du pointeur
  XPtr<dodo> p(&x, false);
  Rcout << "On renvoie un pointeur vers x ; mais x sort du scope !\n";
  return p;
}

// [[Rcpp::export]]
XPtr<dodo> mkDodo2(int a, int b) {
  // new alloue de la mémoire et appelle le constructeur 
  dodo * p_Dodo = new dodo(a, b);
  // Création du pointeur XPtr 
  XPtr<dodo> xp_Dodo(p_Dodo);
  return xp_Dodo;
}

// [[Rcpp::export]]
void printDodo1(XPtr<dodo> xpDodo) {
  // création d'un pointeur vers le dodo
  dodo * p_Dodo = xpDodo.get();
  p_Dodo->print();
}

// [[Rcpp::export]]
void printDodo2(XPtr<dodo> xpDodo) {
  // création d'une référence vers le dodo
  dodo & MonDodo( *xpDodo.get() );
  MonDodo.print();
}


