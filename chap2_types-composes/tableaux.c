#include <stdio.h>

#define N 5



// fonction qui affiche le contenu d'un tableau
void array_print(double tab[], int n) {
  //printf("Depuis fonction \n");
  printf("{");
  
  // on va boucler pour afficher toutes les valeurs du tableau
  
  int i;
  for(i=0;i<n;i++) {
    if(i!=0) printf(",");
    printf("%f", tab[i]);
  }

  printf("}\n");
}


// fonction qui retourne la somme de toutes les cases d'un tableau
double array_sum(double tab[], int n) {

  double sum = 0; // variable retournee
  int i; // compteur

  for(i=0;i<n;i++) {
    sum += tab[i];
  }

  return(sum);
}

// fonction qui met toutes les cases d' un tableau a zero
void set_to_zero(double tab[], int n) {
  
  int i;

  for (i=0;i<n;i++) {
    tab[i] = 0;
  }
}

main() {

  // int tab[N];
  // tab = {1.0, 2.0, 3.0, 4.0, 5.0};
  double tab[N] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

  printf("\nContenu element 0 du tableau : %f\n", tab[0]);
  array_print(tab, N);

  printf("La somme est %f\n", array_sum(tab, N));

  printf("\n");

  printf("Remise a zero de tab");
  set_to_zero(tab, N);
  array_print(tab, N);
  printf("\n");
}
