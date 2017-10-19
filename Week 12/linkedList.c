#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

int checkList(List l, int array[], int n, char* s);
List arrayToList(int array[], int n);
void zip(List A, List B);
void append(List A, List B);
void prepend(List A, List B);
void insertInOrder(List A, List B);


void zip(List A, List B) {

}

void append(List A, List B) {

}

void prepend(List A, List B) {

}

void insertInOrder(List A, List B) {
	Node curr = B->head;
	while (curr != NULL) {
		insertOneInOrder(A,curr);
		curr = curr->next;
	}
}

void insertOneInOrder(List A, Node n) {
	Node cpy = newNode(n->value);
	int done = FALSE;
	Node curr = A->head;
	Node next = A->head->next;
	while (curr->next != NULL) {
		if (next->value >= cpy->value) {
			curr->next = cpy;
			cpy->next = next;
			done = TRUE;
		}
		next = curr->next->next;
		curr = curr->next;
	}

	if (done == FALSE) {
		// add to tail
	}
}




int main(int argc, char* argv[]) {
	return EXIT_SUCCESS;
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
