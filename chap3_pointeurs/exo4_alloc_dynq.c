#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void main(void) {
  
  int *p;
  printf("Valeur de p = %p\n", p); // (nil)

  //*p = 3;
  // printf("valeur de *p = %i", *p); // Erreur de segmentation
  // erreur car memoire non allouee pour stocker la valeur 3

  p = (int*)malloc(2*sizeof(int));

  *p = 3;

  *(p+1) = 42;

  printf("valeur de *p = %d\n", *p);
  printf("Valeur de p = %p\n\n", p);
  
  int i = 5;

  int j = 6;

  *p = i;

  printf("@ de i = %p\n", &i);
  printf("val de i = %d\n\n", i);

  printf("@ de p = %p\n", &p);
  printf("val de p = %p\n\n", p);

  printf("@ de *p = %p\n", &*p);
  printf("val de *p = %d\n\n", *p); 

  /*
    i est egal a 5, 
    et maintenant la valeur vers laquelle pointe p est aussi 5
    meme si p et i n'ont rien a voir 
  */

  //printf("@ de p+1 = %p\n", &(p+1));
  printf("val de p+1 = %p\n\n", p+1);

  printf("@ de *(p+1) = %p\n", &*(p+1));
  printf("val de *(p+1) = %d\n\n", *(p+1)); 


  free(p);

}
