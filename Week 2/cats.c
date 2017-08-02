#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main(int argc, char* argv[]){
	// What does 1 mean?
	int cats = 10;
	int crazy = TRUE;
	if(cats == 0){
	    printf("I have no cats\n");
	}
	else if(cats == 5){
	    printf("I have some cats\n");
	}
	else if(5 < cats < 10){
	    printf("I have possibly too many cats\n");
	}
	else if(cats == 10 && crazy){
	    printf("I am a crazy cat person\n");
	}
	else if(cats == 10){
	    printf("I am a cat person\n");
	}
	else if(cats == -1 || 11){
	    printf("?????\n");
	}
	return EXIT_SUCCESS;
}
