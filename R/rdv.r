#' @export 
make.rdv <- function(lieu, H, M, S) {
  a <- mkRDV(lieu, H, M, S)
  class(a) <- "rdv"
  a
}

#' @export 
print.rdv <- function(x, ...) {
  cat("Rendez vous à ", getLieu(x), " à ", getHeure(x), "\n")
}