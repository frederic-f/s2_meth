#include <assert.h>
#include <stdio.h>

void echange_val(double *a, double *b) {

  int tmp;
  tmp = *b;

  *b = *a;
  *a = tmp;

}

void inverse_tab(int tab[], size_t n) {
  
  // on echange les valeurs extremes

}

int main () {
  
  // inversion de deux variables
  double a;
  double b;

  a = 6.0;
  b = 7.0;

  echange_val(&a, &b);

  assert(b == 6.0);
  assert(a == 7.0);
  
  // inversion d'un tableau
  int tab[4] = {};

}
