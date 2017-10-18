#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/*
	COMP1511 Linked List Practice
		   Ordered Delete
	  Written by Michael Simarta
	With the help of Bernice Chen
	   Adapted by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/* given a list of integers, write a function which 
 * finds all even integers and constructs
 * a new list containing these even integers 
 * The original list should remain unmodified.
 * The new list should be returned by the function.
 * So if the original list is 1->55->66->4->X, the function
 * should return a list 66->4->X. 
 * And if the original list is 1->3->7->X, the function
 * should return an empty list.
 *
 * Constraints:
 * don't delete any nodes (i.e. do not call free())
 * the order of integers in the new list should be the same as the original
 * the original list should remain unmodified
 */

List selectEven (List sourceList) {
	return NULL;
}


int main(int argc, char* argv[]) {
	// a very basic test
	// this is not great... write your own!!
	// think of edge cases

	List l = newList();
	l->head = newNode(1);
	l->head->next = newNode(0);
	l->head->next->next = newNode(2);
	l->head->next->next->next = newNode(8);

	List l2 = orderedDelete(l);

	assert(l->head->value == 1);
	assert(l->head->next->value == 0);
	assert(l->head->next->next->value == 2);
	assert(l->head->next->next->next->value == 8);
	assert(l->head->next->next->next->next == NULL);

	assert(l2->head->value == 2);
	assert(l2->head->next->value == 8);
	assert(l2->head->next->next->=next == NULL);

	destroyList(l);
	destroyList(l2);
	printf("You passed my 1 test, now write your own!\n");
}
