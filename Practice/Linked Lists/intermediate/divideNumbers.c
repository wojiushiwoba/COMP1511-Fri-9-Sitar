#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/*
	COMP1511 Linked List Practice
		   divide numbers
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/*
 * We want to write this function which takes
 * in a array of length n and two empty lists, 
 * high and low. When the function ends
 * high should contain all numbers higher
 * then or equal to the target number (t)
 * and low should contain all lower numbers. 
 *
 * preserve the order the number came in,
 * so if you get a array like
 * [0,1,2,3]
 * with a target of 2 you should get

 * Lower: 0->1
 * Higher: 2->3
 *
 * if you produce

 * Lower: 1->0
 *
 * or otherwise that's wrong
 *
 * -- NOTE --
 * The list.c given to you doesn't have many
 * functions, feel free to add more here that you
 * think may help
 */

void divideNumbers(int array[], int n, int t, List high, List low) { 
	return;
}


int main(int argc, char* argv[]) {
	// a very basic test
	// this is not great... write your own!!
	// think of edge cases

	List h = newList();
	List l = newList();
	int t = 5;
	int a[10] = {0,1,2,3,4,5,6,7,8,9};

	divideNumbers(a,10,t,h,l);

	assert(l->head->value == 0);
	assert(l->head->next->value == 1);
	assert(l->head->next->next->value == 2);
	assert(l->head->next->next->next->value == 3);
	assert(l->head->next->next->next->next->value == 4);
	assert(l->head->next->next->next->next->next == NULL);
	assert(h->head->value == 5);
	assert(h->head->next->value == 6);
	assert(h->head->next->next->value == 7);
	assert(h->head->next->next->next->value == 8);
	assert(h->head->next->next->next->next->value == 9);
	assert(h->head->next->next->next->next->next == NULL);

	destroyList(h);
	destroyList(l);
	printf("You passed my 1 test, write your own!\n");
}