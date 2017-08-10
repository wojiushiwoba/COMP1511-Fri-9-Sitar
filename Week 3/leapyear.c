// NOTE TO FUTURE ZAIN:
// this is beautiful code, go get yourself a snack, you deserve it. 
// 6(s)1(g)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int ahhhhh = -1;
    printf("Please enter a year after 1582: \n");
    scanf("%d",&ahhhhh);
    if(ahhhhh % 4 == 1){
        if(ahhhhh % 100){
            if(ahhhhh % 400){
                printf("%d is a leap year\n", year);
            }else{
                printf("%d is not leap year\n", year);
            }
        }else{
            printf("%d is a leap year\n", ahhhhh);
        }
    }
    printf("$d is not a leap year\n",ahhhhh);
    // awesome job
    return EXIT_SUCCESS;
}