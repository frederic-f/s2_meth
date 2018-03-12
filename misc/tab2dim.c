#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// fonction d'impression du tableau
void print_tableau(int * * tab, int nb_lignes, int nb_colonnes)
{
    printf ("\nimpression du tableau...\n") ;

    int i, j ;

    for (i = 0 ; i < nb_lignes ; i += 1)
    {
        for (j = 0 ; j < nb_colonnes ; j += 1)
        {
            printf (" %d ", tab[i][j]) ;
        }

        printf ("\n") ;
    }
}


// creation, remplissage, puis affichage d'un tableau a deux dimensions

int main ()
{
    //
    int nb_lignes = 10 ;
    int nb_colonnes = 10 ;

    // pointeur principal
    // allocation de son adresse memoire
    int * * tab ;

    // allocation des adresses memoires pour les pointeurs vers chaque ligne
    tab = (int * *) malloc (nb_lignes * sizeof (int *)) ;

    int i ;

    for (i = 0 ; i < nb_lignes ; i += 1)
    {
        // allocation de la place memoire nécessaire a chaque ligne
        // chaque ligne va contenir nb_colonnes int

        // les adresses mémoires sont déjà alllouées
        tab[i] = (int *) malloc (nb_colonnes * sizeof (int)) ;

        // tant qu'on y est on les remplit de suite
        int j ;

        for (j = 0 ; j < nb_colonnes ; j += 1)
        {
            tab[i][j] = i + j ;
        }
    }

    // petite verification que le remplissage s'est bien déroulé
    assert (tab[5][5] == 10) ;

    // une fois le tableau rempli, on va l'imprimer via une fonction exterieure

    print_tableau(tab, nb_lignes, nb_colonnes) ;


    // liberation de toute la memoire
    for (i = 0 ; i < nb_lignes ; i += 1)
    {
        free (tab[i]) ;
    }

    free (tab) ;
}