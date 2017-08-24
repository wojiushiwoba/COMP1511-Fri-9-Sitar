#include <stdlib.h>
#include <stdio.h>

void setArrayValues(int length, int array[], int value);
void printArray(int array[], int size);

int main(int argc, char* argv[]){
	// tests
	int array[10]; 
	// call here
	
	printArray(array,20);
    return EXIT_SUCCESS;
}

void setArrayValues(int length, int array[], int value){

}
void printArray(int array[], int size){
	int i = 0;
	while(i<size){
		if(i == size-1){
			printf("%d",array[i]);
		}else{
			printf("%d, ",array[i]);
		}
		i++;
	}
	printf("\n");
}

