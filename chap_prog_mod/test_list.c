/******************************************************************/
/* test_list.c                                                    */
/* Prénom NOM, March 2014                                      */
/* L1 S2 Méthodologie                                             */
/******************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "int_list.h"

#define N1 -10
#define N2 -20

/* Test that an empty list is indeed empty. */
void test_empty_list_is_empty (void)
{
  /* done */

  int_list L ;

  L = int_list_new_empty () ;

  assert (int_list_is_empty (L)) ;
  
}

/* Test that a list which is added a new element is indeed non empty */
void test_non_empty_list_is_non_empty(void)
{
  /* done */

  int_list L ;
  int_list L_vide ;

  L_vide = int_list_new_empty () ;

  L = int_list_cons (5, L_vide) ;

  assert (!int_list_is_empty (L)) ;
}

/* Test that the head of the list after a cons is indeed the argument
   of the cons function */
void test_first_element_of_consed_list(void)
{
  /* TODO: to fill */

  int_list L ;
  int_list L_vide ;

  L_vide = int_list_new_empty () ;

  L = int_list_cons (5, L_vide) ;

  assert (int_list_head(L) == 5) ;

}  

/* Test that the tail of an empty list is indeed empty */
void test_tail_of_empty_list_is_empty(void)
{
  /* TODO: to fill */
}

/* Test that the tail of a one element list is empty */
void test_tail_of_a_one_elt_list_is_empty(void)
{
  /* TODO: to fill */
}

/* Test that the tail of a list with more than one element is not empty */
void test_tail_of_a_list_with_more_than_one_elt_is_non_empty(void)
{
  /* TODO: to fill */
}

/* Test that a freed list is empty */
void test_freed_list_is_empty(void)
{
  int_list L = int_list_new_empty();
  L = int_list_cons(N1, L);
  L = int_list_cons(N2, L);
  int_list_free(&L);
  assert(int_list_is_empty(L));
}

/* Test that a list is identical element by element to its copy but
   that each element is stored at a different location in the two
   lists.
   Test this with a one element list then a two element list.*/
void test_if_two_lists_are_proper_copies(int_list L1, int_list L2)
{
  while (!int_list_is_empty(L1) && !int_list_is_empty(L2)) {
    assert(L1 != L2);
    assert(int_list_head(L1) == int_list_head(L2));
    L1 = int_list_tail(L1);
    L2 = int_list_tail(L2);
  }
  assert(int_list_is_empty(L1) && int_list_is_empty(L2));
}

void test_copy_list_with_one_elt(void)
{
  int_list L1 = int_list_new_empty(), L2 = int_list_new_empty();
  L1 = int_list_cons(N1, L1);
  L2 = int_list_copy(L1);
  test_if_two_lists_are_proper_copies(L1, L2);
}

void test_copy_list_with_two_elts(void)
{
  int_list L1 = int_list_new_empty(), L2 = int_list_new_empty();
  L1 = int_list_cons(N1, L1);
  L1 = int_list_cons(N2, L1);
  L2 = int_list_copy(L1);
  test_if_two_lists_are_proper_copies(L1, L2);
}

/* The printing function is tested "visually": we actually print the
   elements of the list */
void test_list_print(void)
{
  int_list L = int_list_new_empty();
  int_list_print(L);
  printf("\n");
  L = int_list_cons(N1, L);
  int_list_print(L);
  printf("\n");
  L = int_list_cons(N2, L);
  int_list_print(L);
  printf("\n");
}

int main(void)
{
  test_empty_list_is_empty();
  test_non_empty_list_is_non_empty(); 
  test_first_element_of_consed_list();
  /* test_tail_of_empty_list_is_empty(); */
  /* test_tail_of_a_one_elt_list_is_empty(); */
  /* test_tail_of_a_list_with_more_than_one_elt_is_non_empty(); */
  /* test_freed_list_is_empty(); */
  /* test_copy_list_with_one_elt(); */
  /* test_copy_list_with_two_elts(); */
  /* test_list_print(); */
  return EXIT_SUCCESS;
}

