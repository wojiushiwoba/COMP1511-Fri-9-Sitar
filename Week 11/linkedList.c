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
Node createNode(int value) {
	return NULL;
}

// creating a list
List createList() {
	return NULL;
}

// adding nodes to a list
// should this return something?
// what might be useful
void addNode(List l, Node n) {

}

// removing nodes from a list
// what other functions might be useful?
void removeNode(List l, Node n) {

}

// traversing the list
void printList(List l) {

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