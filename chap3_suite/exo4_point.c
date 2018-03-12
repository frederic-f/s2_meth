#include <stdio.h>
#include <stdlib.h>

// fonction qui retourne l' adresse en memoire allouee pour calcul du triangle de Newton
int * binom_coeff_alloc(int N) {

  int *i = (int *)malloc(N*sizeof(int));
  return i;
}

// fonction qui calcule toutes les valeurs de coeff binomiaux dans le triangle de taille N



// fonction qui libere l'espace memoire alloue

int main() {
  
  int N = 10;

  int *p = binom_coeff_alloc(N);

  printf("Adresse de zone memoire allouee: %p\n", p);

  return EXIT_SUCCESS;
}
