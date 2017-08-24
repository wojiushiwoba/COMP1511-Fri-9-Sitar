#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int getRandomNumber(){
	srand(time(NULL));
	int i = 0;
	int r = 0;
	while(i < 16){
		r = rand();
		i++;
	}
	return (rand()%13);
}



















int main(int argc, char* argv[]){
    int n = getRandomNumber();
	if(n == 1){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 2){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 3){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 4){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 5){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 6){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 7){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 8){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 9){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 10){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 11){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
	if(n == 12){
		printf("THE LUCKY WINNER IS >>> <<<\n");
	}
    return EXIT_SUCCESS;
}

