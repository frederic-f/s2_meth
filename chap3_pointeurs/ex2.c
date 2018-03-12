#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void main(void) {

  int i = 7;
  int j = 8;

  int *p1;
  int *p2;

  p1 = &i;
  p2 = &j;

  // affichage des valeurs
  printf("Valeur de i: %d\n", i);

  printf("Valeur de j: %d\n", j);

  printf("Valeur de p1: %p\n", p1);

  printf("Valeur de p2: %p\n", p2);
}
