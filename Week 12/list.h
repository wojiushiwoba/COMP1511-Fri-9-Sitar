typedef struct _node *Node;
typedef struct _list *List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;


List newList(void);
void destroyList(List l);
Node newNode(int value);
void destroyNode(Node n);

