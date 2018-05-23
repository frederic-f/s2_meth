#include <stdio.h>
#include <stdlib.h>

void printval (int val) {
    printf ("this is aval %d\n", val) ;
}


int main () {
    int i = 5 ;

    printf ("%d\n", i) ;

    int j = 6 ;

    printf ("%d\n", j) ;

    printval (i) ;
}
