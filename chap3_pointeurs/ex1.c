#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void) {
  
  int i, j;
  i = 3;
  j = i;

  // saisir les valeurs pour i et j  
  // use scanf

  printf("Valeur de i: %d\n", i);
  printf("Valeur de j: %d\n", j);

  // taille de i j 
  printf("Taille de i: %zd octets\n", sizeof(i));
  printf("Taille de j: %zd octets\n", sizeof(j));

  // affichage des adresses
  printf("Adresse de i: %p\n", &i);
  printf("Adresse de j: %p\n", &j);

  // affichage taille des adresses
  printf("Taille adresse i: %lu octets\n\n\n", sizeof(&i));

  ////////////////////////////
  // declaration d'un pointeur
  int *p;

  p = &i;

  // affichage valeur de p
  printf("Valeur de p: %p\n", p);

  // affiche adresse de p
  printf("Adresse de p: %p\n", &p);

  // affiche valeur de l'entier vers lequel p pointe
  printf("Valeur de l'entier vers lequel p pointe: %d\n", *p);

  // affich valeur de i
  printf("Valeur de i: %d\n\n\n", i);


  ////////////////////////////
  // modif de valeur de i
  i = 42;
  printf("Modif valeur de i = 42\n");

  printf("Valeur de i: %d\n", i);
 
  // affichage valeur de p
  printf("Valeur de p: %p\n", p);

  // affiche adresse de p
  printf("Adresse de p: %p\n", &p);

  // affiche valeur de l'entier vers lequel p pointe
  printf("Valeur de l'entier vers lequel p pointe: %d\n\n\n", *p);


  /////////////////////////////
  // modif de la valeur de *p
  
  *p = 154;
  printf("Modif valeur de *p = 154\n");

  printf("Valeur de i: %d\n", i);
 
  // affichage valeur de p
  printf("Valeur de p: %p\n", p);

  // affiche adresse de p
  printf("Adresse de p: %p\n", &p);

  // affiche valeur de l'entier vers lequel p pointe
  printf("Valeur de l'entier vers lequel p pointe: %d\n", *p);


}

    /*
// affichage des resultats


Valeur de i: 3
Valeur de j: 3
Taille de i: 4 octets
Taille de j: 4 octets
Adresse de i: 0x7ffdce62ed60
Adresse de j: 0x7ffdce62ed64
Taille adresse i: 8 octets


Valeur de p: 0x7ffdce62ed60
Adresse de p: 0x7ffdce62ed68
Valeur de l'entier vers lequel p pointe: 3
Valeur de i: 3


Modif valeur de i = 42
Valeur de i: 42
Valeur de p: 0x7ffdce62ed60
Adresse de p: 0x7ffdce62ed68
Valeur de l'entier vers lequel p pointe: 42


Modif valeur de *p = 154
Valeur de i: 154
Valeur de p: 0x7ffdce62ed60
Adresse de p: 0x7ffdce62ed68
Valeur de l'entier vers lequel p pointe: 154




     */
