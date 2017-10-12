# Week 9 - ass 1

## Code Review
---

`fun`

## Assignment 0 marks
---

> Very timely i know

#### Talk to me if you are conufsed
#### Example of perfect style

## groups
---
Lets sort this out 

## Linked Lists
---

#### What is it

```c
typedef struct _node *Node;
typedef struct _list *List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;
```

#### Why use it?

1. Advantages
2. Disadvantages

#### How do we play with it?

`linkedList.c`


## Game
---

```c
// Create a new game.
Game g = newGame(/* ... */);

// The turn number should start at 0.
assert (currentTurn(g) == 0);

// Make a move....
// We don't actually care what the contents of this are,
// so we'll make everything 0 for now.
playerMove move = { 0 };
move->action = END_TURN;

// Make the move
playMove(g, move);

// Because we made an END_TURN move, the turn has ended,
// and so we should now be up to turn 1 (player 1's turn)
assert (currentTurn(g) == 1);

// ... and so on.
```

`gameStruct.c`

## Next Weeks Code Review 
---

`who's it gonna be?!`
