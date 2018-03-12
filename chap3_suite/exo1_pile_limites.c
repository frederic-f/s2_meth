#include <stdio.h>
#include <stdlib.h>


void recurs()
{
  int j = 5;
  printf("%p\n", &j);
  
  recurs();
}

int main()
{
  recurs();
  return EXIT_SUCCESS;
}
