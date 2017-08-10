#include <stdlib.h>
#include <stdio.h>

int f(int a, int b);

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

int f(int a, int b){
    // set some variables to show
    // how to return multiple things
    // from a function
    int result = a + b;
    int copy = a + b;
    a = a + b;
    return result;
}