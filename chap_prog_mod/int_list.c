/******************************************************************/
/* int_list.c                                                     */
/* Prénom NOM, March 2014                                      */
/* L1 S2 Méthodologie                                             */
/******************************************************************/

/**************************************/
/* Useful library inclusion           */
/**************************************/

#include <stdio.h> /* for printf() */
#include <stdlib.h> /* for malloc() and free() */

#include "int_list.h"

/*******************************************************************/
/*             FUNCTION DEFINITION                                 */
/*******************************************************************/
/* "constructors" */

int_list int_list_new_empty(void)
{
  return NULL;
}

/* Elementary function to construct a list 
   by prefixing a cell to the list L.
   Needs to allocate room for a new cell in the heap */
int_list int_list_cons(int p, int_list L)
{
  int_list new = int_list_new_empty();

  /* allocation of a new cell in the heap */
  new = (int_list) malloc(sizeof(struct int_list_cell));
  new->data = p; /* equivalent to (*new).data = p; */
  new->next = L;
  return new;
}

/* Function to reverse a list, in place, which means that
   each cell must remain at its same address. 
   No need to use the cons function.
   The goal is to modify the addresses in the field next of each cell 
   The argument of the function is the adress of L 
   as the value of L has to be modified. */

void int_list_reverse(int_list * L)
{
  int_list tmp1 = *L;
  *L = int_list_new_empty();
  
  while (! int_list_is_empty(tmp1)) {
    int_list tmp2 = int_list_tail(tmp1);
    tmp1->next = *L;
    *L = tmp1;
    tmp1 = tmp2;
  }      
}

/* Function which copies a list. It takes a list as an argument.
   It returns a new list with the elements in the same order but 
   stored at different addresses. */
int_list int_list_copy(int_list L)
{
  if (int_list_is_empty(L))
    return int_list_new_empty();
  
  int_list new = int_list_new_empty();
  while (! int_list_is_empty(L)) {
    new = int_list_cons(int_list_head(L), new);
    L = int_list_tail(L);
  }
  int_list_reverse(&new);
  return new;
}

/* access functions */

bool int_list_is_empty(int_list L)
{
  /* done */
  
  return L == NULL;
}

int int_list_head(int_list L)
{
  /* TODO: to fill */

  return 

  return -1;
}

int_list int_list_tail(int_list L)
{
  /* TODO: to fill */
  return L;
}

int int_list_pop(int_list * L)
{
  if (int_list_is_empty(*L))
    {
      printf("*** ERREUR, appel de int_list_pop sur une liste vide ***\n");
      return -1;
    }
  int_list tmp = *L;
  int head_data = int_list_head(*L);
  *L = int_list_tail(*L);
  free(tmp);
  return head_data;
}

/* printing function */

void int_list_print(int_list L)
{
  if (int_list_is_empty(L))
    printf("( )");
  else {
    printf("( ");
    while (!int_list_is_empty(int_list_tail(L))) {
      printf("%d, ", int_list_head(L));
      L = int_list_tail(L);
    }
    printf("%d )", int_list_head(L));
  }
}

/* free function */

void int_list_free(int_list * L)
{
  int_list tmp;
  while (!int_list_is_empty(*L)) {
    tmp = *L;
    *L = int_list_tail(*L);
    free(tmp);
  }
}
