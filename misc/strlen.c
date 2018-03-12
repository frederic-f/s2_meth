#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char * chaine ;

    chaine = "j'ai une grosse bite" ;

    printf ("%c\n", *chaine) ;

    chaine = "t'es sur ?" ;

    printf ("%c\n", *(chaine + 1)) ;

    printf ("%c\n", chaine[2]) ;


    chaine = "123456" ;

    int i ;

    for (i = 0 ; *chaine != '\0' ; i += 1)
    {
        chaine += 1 ;
    }

    printf("lg de la chaine : %d", i) ;
}