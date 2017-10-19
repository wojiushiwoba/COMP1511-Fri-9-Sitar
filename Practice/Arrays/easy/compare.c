/*
	   COMP1511 Array Practice
		      Compare
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/* 
 * Your task is to complete the compare function
 * that takes in two arrays A ane B and two numbers
 * n and m. A is an array of length n and B is an 
 * array of length m. 
 *
 * The function must return true of the two arrays
 * are identical and false otherwise. for example
 *
 * A = [0,1,2,3]
 * B = [0,1,2,4]
 * 
 * will result in FALSE
 *
 * A = [0,1,2,3]
 * B = [0,1,2,3]
 * 
 * will result in TRUE
 *
 * A = [0,1,2,3]
 * B = [0,1,2,3,4,5]
 * 
 * will result in FALSE
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

int compare(int A[], int B[], int n, int m);

// Add your own tests here
int main(int argc, char* argv[]){
	// test 1
	int A[6] = {0,1,2,3,4,5};
	int B[6] = {0,1,3,2,4,5};
	assert(compare(A,B,6,6) == FALSE);

	// test 2
	int A2[6] = {0,1,2,3,4,5};
	int B2[8] = {0,1,3,2,4,5,6,7};
	assert(compare(A2,B2,6,8) == FALSE);

	// test 3
	int A3[6] = {0,1,2,3,4,5};
	int B3[6] = {0,1,2,3,4,5};
	assert(compare(A3,B3,6,6) == TRUE);

	// Write your own here!
	printf("You passed my simple tests, write your own!\n");
}


// FILL THIS IN
int compare(int A[], int B[], int n, int m){
	return TRUE;
}