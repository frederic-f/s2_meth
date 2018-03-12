#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int tab [5] = {1, 3, 5, 1234, 134134};

    int * p ;

    for (p = &tab[0] ; p <= &tab[4] ; p += 1)
    {
        printf ("%d ", *p) ;
    }

    printf ("\n") ;

    int i ;

    p = &tab[0] ;

    for (i = 0 ; i <= 4 ; i +=1)
    {
        printf ("%d ", *(p + i)) ;
    }

    printf("\n") ;

    for (i = 0 ; i <= 4 ; i += 1)
    {
        printf ("%d ", p[i]) ;
    }

    return EXIT_SUCCESS ;
}