/*
	COMP1511 Linked List Practice
		    morePlease
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/* 
 * Oliver comes up to you with a bowl with
 * barely anything in it. 
 * Your task is to write a function called
 * morePlease that takes in a array (olivers bowl) and it's
 * size n and a int m. 
 * The function then returns a bigger array (bowl)
 * with the first n cells filled up with
 * the old array. The empty cells should be 0 filled.
 * 
 * i.e if we give the function [1,2,3] and m = 10
 * we get [1,2,3,0,0,0,0,0,0,0] back. 
 *
 * You are not allowed to use calloc
 * --HINT--
 * The array must exist outside of the scope of the function
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

int* morePlease(int A[], int n, int m);

// Add your own tests here
int main(int argc, char* argv[]){
	// test 1 - just to see if it crashes
	int A[6] = {0,1,2,3,4,5};
	int m = 10;
	int *B = morePlease(A,6,m);
	assert(B != NULL);
	assert(B[0] == 0);
	assert(B[1] == 1);
	assert(B[5] == 5);
	// Write your own here!
	printf("You passed my 1 test, write your own!\n");
}


// FILL THIS IN
int* morePlease(int A[], int n, int m){
	return NULL;
}