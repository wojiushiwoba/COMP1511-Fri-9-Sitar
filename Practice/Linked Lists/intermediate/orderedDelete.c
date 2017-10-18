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

/*
 * given a list of nodes 
 * eg 1->4->2->6->6->10->4->X
 * starting from the front of the list remove from the 
 * list any element whose value is smaller than the
 * value of the last unremoved node before it.
 * hence the list that is left will be in non decreasing
 * order.  
 * remove the new node by rearranging pointers, don't change the 
 * value field for nodes already in the list.
 * (don't call free() on the nodes you remove from the list -
 * instead you can assume they are being used elsewhere or
 * they have been declared on the stack so their removal 
 * from the list will not cause a memory leak)
 
 * eg running the function on this list:
 *   1->4->2->3->6->6->10->4->X
 * would alter the list to become
 *   1->4->6->6->10->X
 */

void orderedDelete (list l) {

}


int main(int argc, char* argv[]) {
	// a very basic test
	// this is not great... write your own!!
	// think of edge cases

	List l = newList();
	l->head = newNode(1);
	l->head->next = newNode(0);
	l->head->next->next = newNode(2);
	l->head->next->next->next = newNode(9);

	orderedDelete(l);

	assert(l->head->value == 1);
	assert(l->head->next->value == 2);
	assert(l->head->next->next->value == 9);
	assert(l->head->next->next->next == NULL);

	destroyList(l);

	printf("You passed my 1 test, now write your own!\n");
}
