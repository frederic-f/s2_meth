#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void main(void){
  int exo3[] = {3, -3};

  int *p1, *p2;

  p1 = &exo3[0];
  p2 = p1 + 1;

  printf("p1 = %p\n", p1);
  printf("p2 = %p\n", p2);

  printf("p2 - p1 = %li\n", p2-p1);

  int i;

  printf("Taille d un int en octets: %li\n", sizeof(i));

  double j;

  printf("Taille d un double en octets: %li\n", sizeof(j));
  
}
