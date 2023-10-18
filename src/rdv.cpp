#include "rdv.h"

std::ostream & operator<<(std::ostream & out, const rdv & a) {
  out << a.lieu << " à " << (heure) a << "\n";
  return out;
}

// out << a << b << c
// ((out << a) << b) << c