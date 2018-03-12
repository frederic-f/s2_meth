#include <stdio.h>
#include <stdlib.h>


void print_tableau (int * * tab, int nb_lignes, int nb_colonnes)
{
    // printf ("Fonction de comptage appelée.\n") ;

    // affichage du tableau

    printf ("\n") ;

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

int main ()
{
    int nb_lignes ;
    int nb_colonnes ;

    nb_lignes = 5 ;
    nb_colonnes = 5 ;

    // déclaration du pointeur principal
    // il va pointer vers les lignes du tableau
    // il va contenir & tab [0]

    int * * tab ;

    // allocation de la place nécessaire au stockage des pointeurs vers les lignes
    // c'est un tableau qui va contenir les pointeurs vers les données

    tab = (int * *) malloc (nb_lignes * sizeof (int *)) ;

    // on alloue maintenant la place necessaire pour contenir les données int

    int i, j ;

    for (i = 0 ; i < nb_lignes ; i += 1)
    {
        //int * tab[i] ;

        // allocation de la mémoire pour la ligne
        tab[i] = (int *) malloc (nb_colonnes * sizeof (int)) ;

        // initialisation des données

        for (j = 0 ; j < nb_colonnes ; j += 1)
        {
            tab[i][j] = i + j ;
        }

    }

    // affichage du contenu du tableau à deux dimensions

    print_tableau (tab, nb_lignes, nb_colonnes) ;


}