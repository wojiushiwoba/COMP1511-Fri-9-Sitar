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
		printf("THE LUCKY WINNER IS >>> Coders || Carlo P And Peter P <<<\n");
	}
	if(n == 2){
		printf("THE LUCKY WINNER IS >>> Byte Me || Tristan B And Marc R <<<\n");
	}
	if(n == 3){
		printf("THE LUCKY WINNER IS >>> lab partner Diane And Rowan || Diane M And Rowan S <<<\n");
	}
	if(n == 4){
		printf("THE LUCKY WINNER IS >>> Spiderman || McKenzie D And Jemima S <<<\n");
	}
	if(n == 5){
		printf("THE LUCKY WINNER IS >>> Tristan Nguyen-dang and Haseeb Syed || Tristan N.D and Haseeb S <<<\n");
	}
	if(n == 6){
		printf("THE LUCKY WINNER IS >>> Arthritic Capsicum || Lavan S and Jordan G <<<\n");
	}
	if(n == 7){
		printf("THE LUCKY WINNER IS >>> What || Bathara L And Yangyuan L <<<\n");
	}
	if(n == 8){
		printf("THE LUCKY WINNER IS >>> Lab Group || Hannah E And Noah K <<<\n");
	}
	if(n == 9){
		printf("THE LUCKY WINNER IS >>> Patrick and Brendan || Patrick C and Brendan D <<<\n");
	}
	if(n == 10){
		printf("THE LUCKY WINNER IS >>> Putchar(Pimps); || Edmund O And Andrew M <<<\n");
	}
	if(n == 11){
		printf("THE LUCKY WINNER IS >>> ?* || Yixuan C And Jiaying Y <<<\n");
	}
	if(n == 12){
		printf("THE LUCKY WINNER IS >>> ?* || Louis Y And Vihan R <<<\n");
	}
    return EXIT_SUCCESS;
}

