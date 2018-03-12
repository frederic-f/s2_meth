#include <stdio.h>
#include <stdlib.h>



int main() {
  int tab[] = {1,2,3,4,5,6,7,8,9,0};
  int *p;

  p = &tab[0];

  printf("%d", *p);
  printf("%d", *(p+2));

  return EXIT_SUCCESS;
}
