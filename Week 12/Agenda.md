# Week 12

## My Experience
---

You can go to https://myExperience.unsw.edu.au and rate me!! 

## Survey
---

do dah paper servey

## Practice
---

on the github for this course there is a folder of linked list practice questions. Have a crack!

I put in 1 general case test, but you should test it yourself with edges cases!

(i'll try to add more over this week if i get a chance)


## Multiple Linked Lists
---


1. How might I append one List to another?

2. How might I prepend one List to another?

3. How might I interleave, or “zip”, values from two lists?

4. How might I insert values into the list in order?

## Stack
---

#### What is it?

#### What is it used for?

```c
// Will determine how big stackData will be.
#define STACK_SIZE 1000

// An ADT, at last!
typedef struct _stack *Stack;

// create a new Stack
Stack newStack (void);

// destroy a stack
void destroyStack (Stack s);

// this is our add function, 'char elt' = character element.
void stackPush (Stack s, char elt);

// returns the topmost element
char stackTop (Stack s);

// this is our pop function -- takes an element off.
char stackPop (Stack s);
```


## Queue
---

1. What might a Queue ADT interface look like?
2. How might we implement one using a linked list to store values?
3. How might we implement one using a Stack?

## Recurrsion
---

#### What is it?

1. What is a base case? What does a base case define?
2. What is a recursive case?
3. Why do we need base cases?

#### tri

\\(tri(0)=0\\)

\\(tri(n)=n+tri(n-1)\\)

1. What’s the base case of tri?
2. What’s the recursive case of tri?
3. How might we implement a function int tri (int n)?

#### ExcapeSteps

how could we do it recurrsively?

\\(z_{n} = z_{n-1}^2+\mu\\)

#### Linked Lits

Could we traverse through a linked list with recurrsion??


## Playing finalCardDown
---

1. What do we need to do to implement the simplest player.c?

 --> Note to future zain: https://www.cse.unsw.edu.au/~cs1511/17s2/week12/20_tutorial/

## Plan Next Week
---

Want to have a party?


