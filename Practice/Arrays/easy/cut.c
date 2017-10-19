/*
	   COMP1511 Array Practice
		        Cut
	   Written by Zain Afzal
	Issues to z.afzal@unsw.edu.au
*/

/* 
 * Your task is to complete the cut function that
 * takes in 3 arrays, A, B and C and a number n.
 * A is of size n, and B and C are of size n/2
 * you can assume that n is always even. 
 *
 * the function should "cut" the first array into two
 * equal sized halfs which are stored in B and C.
 *
 * For example, if the function was given:
 *    A = [0,6,7,3,4,9]
 *    n = 6
 * It should end with B and C being
 *    B = [0,6,7]
 *    C = [3,4,9]
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void cut(int A[], int B[], int C[], int n);

// Ass your own tests here
int main(int argc, char* argv[]){
	// test 1
	int A[6] = {0,1,2,3,4,5};
	int B[3] = {0};
	int C[3] = {0};
	cut(A,B,C,6);
	assert(B[0] == 0);
	assert(B[1] == 1);
	assert(B[2] == 2);
	assert(C[0] == 3);
	assert(C[1] == 4);
	assert(C[2] == 5);
	// test 2
	int A2[2] = {0,120};
	int B2[1] = {0};
	int C2[1] = {0};
	cut(A2,B2,C2,2);
	assert(B2[0] == 0);
	assert(C2[0] == 120);
	// now write your own!!
	printf("You passed my simple tests, write your own!\n");
}


// FILL THIS IN
void cut(int A[], int B[], int C[], int n){

}