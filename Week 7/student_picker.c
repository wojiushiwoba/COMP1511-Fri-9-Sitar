#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "student_picker.h"

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

void pickStudents(int num){
	int i = 0;
	while(i < num){
		int n = getRandomNumber();
		if(n == 1){
			printf("THE LUCKY WINNER IS >>>arrayFunctions || Liam Petersen and Jack Clarke <<<\n");
		}
		if(n == 2){
			printf("THE LUCKY WINNER IS >>>Jack G and Chelsea || Jack Gifford and Chi Qiu <<<\n");
		}
		if(n == 3){
			printf("THE LUCKY WINNER IS >>>Julian & Vincent || Julian Tze Ling Yu and Vincent Zheng <<<\n");
		}
		if(n == 4){
			printf("THE LUCKY WINNER IS >>>comp1511_Fri_G_Z || Zisen Guan and Xiuyi Zhang <<<\n");
		}
		if(n == 5){
			printf("THE LUCKY WINNER IS >>>maerry and Ying XU || Jiayi Si and Ying Xu <<<\n");
		}
		if(n == 6){
			printf("THE LUCKY WINNER IS >>>Anthony & Thomas || Anthony Wu and Thomas Zhu <<<\n");
		}
		if(n == 7){
			printf("THE LUCKY WINNER IS >>>F09A Pair || Kanadech Jirapongtanavech and Jasvir Boparoy <<<\n");
		}
		if(n == 8){
			printf("THE LUCKY WINNER IS >>>Lynn & John || Tsan Hou Lau and Zhelin Jia <<<\n");
		}
		if(n == 9){
			printf("THE LUCKY WINNER IS >>>Gangsta || Dasharna Gamage and Zhuowei Gan <<<\n");
		}
		if(n == 10){
			printf("THE LUCKY WINNER IS >>>Jessica Ren and Miao Du || Jessica Ren and Miao Du <<<\n");
		}
		if(n == 11){
			printf("THE LUCKY WINNER IS >>>?? || Jasdeep Singh Sandhu and Ivan Tan <<<\n");
		}
		if(n == 12){
			printf("THE LUCKY WINNER IS >>>?? || Ziqi Xia abd Jae Jeon <<<\n");
		}
		i++;
	}
}

