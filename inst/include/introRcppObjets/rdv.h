#include "heure.h"

#ifndef _rdv_
#define _rdv_

class rdv : public heure {
public:
  std::string lieu;
  // constructeur
  rdv(std::string li, heure h) : heure(h), lieu(li) {}
};

std::ostream & operator<<(std::ostream & out, const rdv & a);

#endif
