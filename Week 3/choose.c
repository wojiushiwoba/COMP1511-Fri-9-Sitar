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
	return (rand()%11)+1;
}

















int main(int argc, char* argv[]){
    int n = getRandomNumber();

	if(n == 1){
		printf("THE LUCKY WINNER IS >>> Ying X AND Zisen G <<<");
	}
	if(n == 2){
		printf("THE LUCKY WINNER IS >>> Thomas Z AND Ivan T <<<");
	}
	if(n == 3){
		printf("THE LUCKY WINNER IS >>> Vincent Z AND Zhelin J <<<");
	}
	if(n == 4){
		printf("THE LUCKY WINNER IS >>> Jasvir B AND Chi Q <<<");
	}
	if(n == 5){
		printf("THE LUCKY WINNER IS >>> Jack G AND Miao D <<<");
	}
	if(n == 6){
		printf("THE LUCKY WINNER IS >>> Jack C AND Jae J <<<");
	}
	if(n == 7){
		printf("THE LUCKY WINNER IS >>> Jessica R AND Dasharna G <<<");
	}
	if(n == 8){
		printf("THE LUCKY WINNER IS >>> Jiayi S(mary) AND Kanadech J (king) <<<");
	}
	if(n == 9){
		printf("THE LUCKY WINNER IS >>> Anthony W AND Ziqi X <<<");
	}
	if(n == 10){
		printf("THE LUCKY WINNER IS >>> Liam P AND Xiuyi Z AND Zhuowei G <<<");
	}
	if(n == 11){
		printf("THE LUCKY WINNER IS >>> Julian TLY AND Tsan H.L <<<");
	}
    return EXIT_SUCCESS;
}

