#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int i ;

    char * chaine1, * chaine2, * p, * res ;

    chaine1 = "j'ai " ;
    chaine2 = "une grosse bite" ;

    res = (char *) malloc ((strlen (chaine1) + strlen (chaine2)) * sizeof (char)) ;
    p = res ;

    for (i = 0 ; i < strlen (chaine1) ; i += 1)
    {
        *p = chaine1 [i] ;
        p += 1 ;
    }

    for (i = 0 ; i < strlen (chaine2) ; i += 1)
    {
        *p = chaine2 [i] ;
        p += 1 ;
    }

    printf ("Nb de caractères de la chaine totale: %lu\n", strlen (res)) ;
    printf ("caractere 3 = %c\n", res [3]);
    printf ("caractere 6 = %c\n", *(res + 6)) ;
    printf ("caractere 14 = %c\n", res [14]) ;
    printf ("caracaere 19 = %c\n", res [19]) ;

    printf ("caractere 23 = %c\n", res [23]) ;
}