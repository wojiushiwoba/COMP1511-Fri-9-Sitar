#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	/*
	 * Write a while loop to print all
	 * even numbers between 0 and 50
	 */
	int number = 0;
	while(number <= 50){
		if(number % 2 == 0){
			printf("%d\n",number);
		}
		number++; // number = number +1 
	}
	/*
	 * Write a while loop to print out
	 * a rectangle x accross and y high
	 */
	int width = 10;
	int height = 5;
	int i=0;
	int j=0;
	while (j < height){
		while( i< width){
			printf("*");
			i++;
		}
	i = 0;
	printf("\n");
	j++;
	}
	
    return EXIT_SUCCESS;
}

