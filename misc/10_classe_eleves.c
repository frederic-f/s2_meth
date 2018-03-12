#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#define NB_ELEVES 2

int main ()
{
    // creation de la structure eleve

    struct eleve
    {
        char nom [100] ;
        int naiss ;
    };

    // creation d'un pointeur sur struc eleve

    typedef struct eleve * classe ;

    // allocation de la memoire pour stocker les information eleves

    classe my_classe ;

    // on decide de la taille de la classe

    int nb_eleves ;

    printf ("\nCombien d'élèves ? ") ;
    scanf ("%d", &nb_eleves) ;
    printf ("\nOk, on part sur %d élèves", nb_eleves) ;

    // on alloue l'espace necessaire

    my_classe = (classe) malloc (nb_eleves * sizeof (struct eleve)) ;

    // on va maintenant saisir les informations pour chaque eleve

    int i ;

    for (i = 0 ; i < nb_eleves ; i += 1)
    {
        printf ("\nNom de l'élève %d ? ", i + 1) ;
        scanf ("%s", my_classe[i].nom) ;
    }


    // l'utilisateur peut faire afficher des infos d'élèves autant de fois qu'il le souhaite

    int num_eleve ;

    do
    {
        printf ("\nDe quel élève souhaitez-vous avoir les infos ? (0 pour sortir) ") ;

        scanf ("%d", &num_eleve);

        if (num_eleve != 0)
        {
            printf ("\nVoici les infos demandées : \n") ;
            printf ("Nom : %s", my_classe[num_eleve - 1].nom) ;
        }
    }
    while (num_eleve != 0) ;

    free (my_classe) ;

}