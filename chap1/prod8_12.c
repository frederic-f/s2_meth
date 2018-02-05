#include <stdio.h>

int produit(int a, int b)
{
  return(a*b);
}

int produit_n_entiers(int n)
{
  if (n == 0)
    return(1);
  
  int prod;
  int i;

  prod = 1;

  for(i=1;i<=n;i++) {
    prod = prod * i;
  }

  return prod;

}

unsigned int produit_n_entiers_while(int n)
{
  if (n == 0)
    return(1);
  
  int prod;
  int i;

  prod = 1;

  int cpt;
  cpt = 1;

  while(cpt<=n){
    prod = prod * cpt;
    cpt = cpt + 1;
  }

  return prod;
}

main(){

  int i = 8;
  int j = 4;

  unsigned int p;

  p = produit_n_entiers_while(20); // on constate les limites de stockage des unsigned car le produit est retourne comme un entier 

  printf("Le produit a afficher est %d\n",p);
}
