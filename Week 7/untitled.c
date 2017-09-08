#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define NUMBERS 10

void printArray(int array[], int size);

int main(int argc, char* argv[]){
	int i = 0;
	int input = -1;
	int inputArray[NUMBERS] = {0};
	int reverseArray[NUMBERS] = {0};
	getInput(inputArray,NUMBERS);
	i = 0;
	while(i<NUMBERS){
		reverseArray[i] = inputArray[NUMBERS-i];
		i++;
	}
	printArray(reverseArray, NUMBERS);
	return EXIT_SUCCESS;
}

void printArray(int array[], int size){
	int j=0;
	while(j<size){
		printf("%d ", array[j]);
		j++;
	}
}