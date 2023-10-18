// useful debugging macros
#define SHOW(x) Rcpp::Rcout << #x << " = " << (x) << "\n";
#define SHOWVEC(x) Rcpp::Rcout << #x << " = (";                \
  for(auto & _a_ : x) Rcpp::Rcout << _a_ << " ";                  \
  Rcpp::Rcout << ")\n";
