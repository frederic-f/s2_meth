#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_OF_BOOKS_MAX            40
#define NUM_OF_COLLECTIONS_MAX      3  /* Nb de collections */
#define NUM_OF_BOOKS_PER_COLLECTION_MAX         10  /* NB de books par collection */

#define NUM_OF_USERS_MAX            100
#define NUM_OF_BOOKS_PER_USER_MAX   10



/********************************************************************************
 *  Structures
 ******************************************************************************* */

/* Q1 book */
struct book {
    char * title ;
    char * author ;
    int pub_year ;
};
typedef struct book book_s ;
typedef book_s * book_s_p ;


/* Q2 book_db */
book_s book_db[NUM_OF_BOOKS_MAX] ;


/* Q3 collection */
struct collection {
    char colname[50] ; /* char * colname (if not fixed size */
    book_s_p colbooks[NUM_OF_BOOKS_PER_COLLECTION_MAX] ;
};
typedef struct collection collection_s ;
typedef collection_s * collection_s_p ;


/* Q4 collection_list */
collection_s collection_list[NUM_OF_COLLECTIONS_MAX] ;


/* Q5 user_record */
struct user_record {
    char * lastname ;
    char * firstname ;
    book_s_p booklist [NUM_OF_BOOKS_PER_USER_MAX] ;
};
typedef struct user_record user_record_s ;
typedef user_record_s * user_record_s_p ;


/* Q6 user_list */
user_record_s_p user_list[NUM_OF_USERS_MAX] ;



/********************************************************************************
 *  Structures
 ******************************************************************************* */
int main () {

    /* creation de livres */  
    int num_of_books = 0 ;
    
    book_db[0].title = "The dark tower" ;
    book_db[0].author = "KING" ;
    book_db[0].pub_year = 1994 ;
 
    book_db[1].title = "10 petits negres" ;
    book_db[1].author = "CHRISTIE" ;
    book_db[1].pub_year = 1972 ;
    
    book_db[2].title = "Cape Fear" ;
    book_db[2].author = "KOONTZ" ;
    book_db[2].pub_year = 1991 ;
    
    num_of_books = 3 ;
    
    
    /* creation de collections */
    int num_of_collections = 0 ;
    
    strcpy (collection_list[0].colname, "science-fiction") ;
    strcpy (collection_list[1].colname, "jardinage") ;
    strcpy (collection_list[2].colname, "policier") ;

    num_of_collections = 3 ;
    
    
    /* creation d'utilisateurs */
    int num_of_users = 0 ;
    
    strcpy (collection_list[0].colname, "science-fiction") ;
    strcpy (collection_list[1].colname, "jardinage") ;
    strcpy (collection_list[2].colname, "policier") ;

    num_of_users = 3 ;
    
    
    /* afficher des noms de collection */

    printf("Liste des collections\n") ;
    
    int i = 0 ;

    for (i = 0 ; i <=  num_of_collections ; i += 1) {
        
        if(collection_list[i] != NULL) {
            printf(". %s\n", collection_list[i].colname) ;
        }
            
    }

    printf ("\n") ;


   /* afficher la liste des libres */
   
    printf("Liste des livres\n") ;

    for (i = 0 ; i <  num_of_books ; i += 1) {
        printf(". %s\n", book_db[i].title) ;
    }

    printf ("\n") ;


    return 0 ;
}