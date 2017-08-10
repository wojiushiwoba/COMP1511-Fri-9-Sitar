#include <stdlib.h>
#include <stdio.h>

void numToWord(int n);

int main(int argc, char* argv[]){
	// get input
	int input = -1;
	scanf("%d",&input);
	// something you should do
	// what should we do here?
	if(input > 10 || input < -10){
		// do nothing
	}else{
		if(input < 0){
			printf("negative ");
			input = -1*input;	
		}
		numToWord(input);
	}

	return EXIT_SUCCESS;
}

// possibly takes in a number n that is higher then or equal to 0
// and less then or equal to 10
void numToWord(int n){
	if(n == 0){
		printf("zero\n");
	}
	...
}
