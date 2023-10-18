#include "heure.h"

std::string heure::string() const {
  auto a = getHMS();
  std::string s = std::to_string(std::get<0>(a)) + ":" 
  + std::to_string(std::get<1>(a)) + ":" + std::to_string(std::get<2>(a));
  return s;
}

heure & heure::operator+=(const heure & b) {
  t += b.t;
  // On se renvoie soi-même
  return *this;
}

heure operator+(heure a, const heure & b) {
  a += b;
  return a;
}

std::ostream & operator<<(std::ostream & out, const heure & a) {
  out << a.string();
  return out;
}