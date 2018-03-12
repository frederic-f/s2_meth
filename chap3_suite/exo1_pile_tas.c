#include <stdio.h>
#include <stdlib.h>


void test_fonction() 
{
  int tab[3] = { 1, 2, 3 };

  printf("%p\n", &tab[0]);
  printf("%p\n", &tab[1]);
  
  int tab2[3] = { 1, 2, 3 };

  printf("%p\n", &tab2[0]);
  printf("%p\n", &tab2[1]);

}


int main()
{
  

  // creation d une premiere variable
  int i = 5;
  printf("%p \n", &i);

  int j = 5;
  printf("%p \n", &j);

  // creation pointeur 
  int *p;
  // allocation memoire pour case 3 int
  p = (int *)malloc(3*sizeof(int));
  
  // on peut maintenant remplir le "tableau" p en allant vers le "haut"
  *(p+2) = 6;
  //printf("Valeur dans tas %d \n", *(p+2));


  // pareil mais sans alllocation dynamique

  // declaration d'un tableau d'int
  int tab[3] = { 1, 2, 3 };

  //printf("Valeur dans pile main %d \n", *(tab-2));
  //printf("%p\n", &tab[0]);
  //printf("%p\n", &tab[1]);


  // pareil mais au sein d'une fonction

  test_fonction();


  return EXIT_SUCCESS;
}
