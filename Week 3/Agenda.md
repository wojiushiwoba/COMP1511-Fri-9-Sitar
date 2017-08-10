# Week 3 - Functions!!!

## Lazy
---
i have been lazy and have been using

```
dcc code.c
```

i should be using
```
dcc -o runMe code.c
```

## Functions??
---

#### Why?

why bother?

#### Principle

```c
int f(int a, int b){
    // set some variables to show
    // how to return multiple things
    // from a function
    int result = a + b;
    int copy = a + b;
    a = a + b;
    return result;
}

int main(int argc, char* argv[]){
    int a = 1;
    int b = 1;
    int answer = f(1,1);
    // print out all the things we got back!
    printf("answer: %d\n",answer);
    printf("a: %d\n", a);
    printf("copy: %d\n", copy);

    // awesome job
    return EXIT_SUCCESS;
}
```

## Question
---

write up a program which uses functions to convert numbers into words for numbers between -10 and 10.

## Code Reivew - My Leap Year Code
---

i did nothing wrong i am perfect. 

#### What is a code review
 
(i did a copy)

How a code review works:

1. The class and tutor (the reviewers) give feedback, ask questions, make suggestions. You tutor will show you how to do this at first but then will expect the other reviewers to take over.
2. Reviewers are NOT negative, a review is to be supportive and constructive and helpful to the reviewees.
3. The reviewees should speak very little, just give a brief overview of the code they want reviewed.
4. Reviewees show the code on the projector and place their code on their blog.
5. Let everyone have a turn to speak, don’t dominate the conversation.
6. Contribute and participate, don’t be silent. If you don’t understand anything then that doesn’t mean be silent - it means ASK for an explanation. By asking you are helping the coders to see how to be clearer.
7. At the end of the exercises **write in your blog** briefly what you did in the review and what you learned from the review.

#### How we can fix it

style?
logic?
variables?

## Code Review - Confusing code discussion (you fix it in the lab!)
---

----Note to future zain: aim for 11:30 start----


## Your turn
---
If there is time in the tutorial, see if any student pair would like to do a 10 minute code review on the leap year task from week 2.

## Assign group for code review
---

The code review for next week will be sort 3 numbers activity. Select a student pair who will present their code next week for code review.

## Revision
---

