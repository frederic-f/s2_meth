#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int receiveInput ( char *s )
{
    scanf ("%99s", s) ;
    return 1 ;
}
int main ()
{
    char str[100];

    int i = receiveInput (str);

    int length = strlen (str);

    printf ("Your string is %s, length is %d\n", str, length);

    return 0;
}