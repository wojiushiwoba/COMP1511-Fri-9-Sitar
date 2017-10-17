#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


int checkList(List l, int array[], int n, char* s);
List arrayToList(int array[], int n);

/*
	COMP1511 Linked List Practice
			oddEven
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/*
 * We want to write this function below. 
 * it takes in 2 lists, A and B.
 *
 * for every element e in B we do 1 of 3 things
 *   --1--
 *   if e appears in A an odd number of times, 
 *   delete e from B
 *
 *   --2--
 *   if e appears in A an even number of times,
 *   duplicate e in place in B
 *
 *   --3--
 *   if e doesn't appear in A, no nothing. 
 *
 *
 * so if we have 1->2->3->2 and 0->1->4->2->6
 * we get 0->4->2->2->6
 * 
 * the 0 in B was untouched
 * the 1 was removed because it appears once 
 * (a odd number) in A
 * 4 was untouched
 * 2 was duplicated because it occurs twice in A
 * 6 was untouched
 * 
 * List A is untouched after this
 * whereas list B changes in the ways above

 * -- NOTE --
 * The list.c given to you doesn't have many
 * functions, feel free to add more here that you
 * think may help
 */

void oddEven(List A, List B) { 
	return;
}


int main(int argc, char* argv[]) {
	// a very basic test
	// this is not great... write your own!!
	// think of edge cases
	int arrayA[] = {1,2,3,2};
	int correctA[] = {1,2,3,2};
	int arrayB[] = {0,1,4,2,6};
	int correctB[] = {0,4,2,2,6};

	List A = arrayToList(arrayA,4);
	List B = arrayToList(arrayB,5);

	oddEven(A,B);

	int res = 0;
	res += checkList(A,correctA,4,"A");
	res += checkList(B,correctB,5,"B");

	if (res == 0) {
		printf("You passed my 1 test, now write your own!\n");
	}
	destroyList(A);
	destroyList(B);
}



List arrayToList(int array[], int n) {
	List l = newList();
	int i = 1;
	l->head = newNode(array[0]);
	Node curr = l->head;
	while (i<n) {
		curr->next = newNode(array[i]);
		curr = curr->next;
		i++;
	}
	return l;
}

int checkList(List l, int array[], int n, char* s) {
	Node curr = l->head;
	int i = 0;
	int errs = 0;
	while (curr != NULL && i < n) {
		if (!(curr->value == array[i])) {
			printf("%s->FAILED: %d should be %d at position %d\n",s,curr->value,array[i],i);
			errs +=1;
		}
		curr = curr->next;
		i++;
	}
	if(i != n) {
		printf("%s->FAILED: Too short!\n",s);
		errs++;
	}
	if(curr != NULL) {
		printf("%s->FAILED: Too long!\n",s);
		errs++;
	}
	return errs;
}