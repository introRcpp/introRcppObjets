#include <Rcpp.h>
#include <iostream> // pour la définion de std::ostream

#ifndef _heure_
#define _heure_

class heure {
private:
  unsigned int t; // temps en secondes depuis 00:00:00...
  
public:
  // constructeurs
  heure() : t(0) { 
    Rcpp::Rcout << "heure()\n";
  }
  heure(int h, int m, int s) : t(3600*h + 60*m + s) {
    Rcpp::Rcout << "heure(" << h << "," << m << "," << s << ")\n";
  }
  std::tuple<int, int, int> getHMS() const {
    int h = t/3600;
    int m = (t % 3600)/60;
    int s = t % 60;
    return std::make_tuple(h,m,s);
  }
  std::string string() const;
  heure & operator+=(const heure & a);
};

heure operator+(heure a, const heure & b);
std::ostream & operator<<(std::ostream & out, const heure & a);


#endif


