#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define COLLECTION_SIZE         10  /* NB de books par collection */
#define NUM_OF_COLLECTIONS      3  /* Nb de collections */

/*  *******************************************************************************
 *  Structures
 *  *******************************************************************************/

struct book {
    char * title ;
    char * author ;
    int * pub_year ;
};
typedef struct book book_s ;
typedef book_s * book_s_p ;


struct collection {
    char colname[50] ; /* char * colname (if not fixed size */
    book_s_p colbooks[COLLECTION_SIZE] ;
};
typedef struct collection collection_s ;
typedef collection_s * collection_s_p ;


collection_s collection_list[NUM_OF_COLLECTIONS] ;


/*  *******************************************************************************
 *  Structures
 *  *******************************************************************************/
int main () {

    strcpy (collection_list[0].colname, "science-fiction") ;
    strcpy (collection_list[1].colname, "jardinage") ;
    strcpy (collection_list[2].colname, "policier") ;

    /* afficher des noms de collection */

    int i = 0 ;

    for (i = 0 ; i <  NUM_OF_COLLECTIONS ; i += 1) {
        printf("%s\n", collection_list[i].colname) ;
    }





    return 0 ;
}