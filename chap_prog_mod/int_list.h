#ifndef INT_LIST_H
#define INT_LIST_H

/******************************************************************/
/* int_list.h                                                     */
/* Marion VIDEAU, March 2014                                      */
/* L1 S2 Méthodologie                                             */
/******************************************************************/

/**************************************/
/*   Useful library inclusion         */
/**************************************/

#include <stdbool.h>

/*********************************************/
/* Defining the struct int_list_cell         */
/*********************************************/

/* A list cell of int is a struct (record) composed of:
 * a field data containing an int
 * a field next containing the adress of the next list cell 
 */

struct int_list_cell
{
  int data;
  struct int_list_cell * next;
};

/***********************************/
/* Defining the type int_list      */
/***********************************/
/* The type int_list is defined as a pointer on its first cell */

typedef struct int_list_cell * int_list;

/***************************/
/*  Function prototypes    */
/***************************/

/* "constructors" */

int_list int_list_new_empty(void);
int_list int_list_cons(int p, int_list L);
int_list int_list_copy(int_list L);

/* access functions */

bool int_list_is_empty(int_list L);
int int_list_head(int_list L);
int_list int_list_tail(int_list L);
int int_list_pop(int_list * L);

/* printing function */

void int_list_print(int_list L);


/* free function */

void int_list_free(int_list * L);


#endif /* INT_LIST_H */
