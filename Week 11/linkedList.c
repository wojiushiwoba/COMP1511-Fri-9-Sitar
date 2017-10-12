#include <stdio.h>
#include <stdlib.h>

typedef struct _node *Node;
typedef struct _list *List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;


// creating a node
Node createNode(int v) {
	Node new = calloc(1,sizeof(node));
	new->value = v;
	new->next = NULL;
	return new;
}

// creating a list
List createList() {
	List new = calloc(1, sizeof(list));
	new->head = NULL;
	return new;
}

// adding nodes to a list
// should this return something?
// what might be useful
void addNode(List l, Node n) {

	// list is empty
	if (l->head == NULL) {
		l->head = n;
	} else {
		// list has some elements in it
		Node curr = l->head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}

}

// removing nodes from a list
// what other functions might be useful?
void removeNode(List l, Node n) {
	
}

// traversing the list
void printList(List l) {
	Node curr = l->head;
	while (curr != NULL) {
		printf("%d -> ",curr->value);
		curr = curr->next;
	}
	printf("NULL\n");
}

// tests
int main(int argc, char* argv[]) {
	List l = createList();
	addNode(l,createNode(1));
	addNode(l,createNode(2));
	addNode(l,createNode(3));
	addNode(l,createNode(4));
	printList(l);
	return EXIT_SUCCESS;
}