#include <stdlib.h>
#include "list.h"

// creates a new list
List newList(void) {
	List new = calloc(1,sizeof(list));
	new->head = NULL;
	return new;
}

void destroyList(List l) {
	Node curr = l->head;
	Node toKill;
	while (curr != NULL) {
		toKill = curr;
		curr = curr->next;
		destroyNode(toKill);
	}
	free(l);
}

Node newNode(int value) {
	Node new = calloc(1,sizeof(node));
	new->value = value;
	new->next = NULL;
	return new;
}

void destroyNode(Node n) {
	free(n);
}