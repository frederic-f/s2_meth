#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // saisie et affichage d'un caractere

    char k ;

    printf ("saisie d'un caractere : ") ;

    scanf ("%c", &k) ;

    printf ("le caractere saisi est : %c\n", k) ;


    // saisie et affichage d'une chaine de caracteres

    char * str ;

    str = (char *) malloc (100 * sizeof (char)) ;

    printf ("Saisir une chaine de caracteres : ") ;

    scanf ("%s", str) ;

    printf ("la chaine saisie est : %s", str) ;


}