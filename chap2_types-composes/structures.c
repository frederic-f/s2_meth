#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct personne {
  char nom[10];
  char prenom[10];
  int num_employe;
};
typedef struct personne personne;


void affich_personne(personne p){

  printf("\n%s %s, employe %d\n\n", p.prenom, p.nom, p.num_employe);
}

personne increment_num_personne(personne p) {
  p.num_employe++;

  return p;
}


int main() {
  personne p1 = {"Jean", "Dupond", 1298};
  personne p2 = {"Pierre", "Cosson", 1299} ;

  affich_personne(p1);

  affich_personne(p2);

  p2 = increment_num_personne(p2);
  affich_personne(p2);

}
