#include <stdlib.h>
#include <stdio.h>

void setArrayValues(int length, char array[], char value);
void printArray(char array[], int size);

int main(int argc, char* argv[]){
	// tests
	char array[10] = {0};
	// call here
	setArrayValues(10,array,'b');
	printArray(array,500);
    return EXIT_SUCCESS;
}

void setArrayValues(int length, char array[], char value){
	int i = 0;
	while(i<length){
		array[i] = value;
		i++;
	}
}
void printArray(char array[], int size){
	int i = 0;
	while(i<size){
		if(i == size-1){
			printf("%c",array[i]);
		}else{
			printf("%c",array[i]);
		}
		i++;
	}
	printf("\n");
}

