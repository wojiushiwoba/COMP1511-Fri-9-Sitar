#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/*
	COMP1511 Linked List Practice
		    doubleList
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/*
 * Write the function below that takes in a linked list
 * and doubles the value in each node, i.e *2
 *
 * -- NOTE --
 * The list.c given to you doesn't have many
 * functions, feel free to add more here that you
 * think may help
 */

void doubleList(List l) { 
	
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

	doubleList(l);

	assert(l->head->value == 2);
	assert(l->head->next->value == 0);
	assert(l->head->next->next->value == 4);
	assert(l->head->next->next->next->value == 18);
	assert(l->head->next->next->next->next == NULL);
	destroyList(l);
	printf("You passed my 1 test, write your own!\n");
}