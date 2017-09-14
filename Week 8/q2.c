// Write a C function that determines
// whether a string contains uppercase letters.
//
// Your function should return
// TRUE if the string contains uppercase letters,
// and FALSE if it does not.
//
// Your function should take one parameter: the string to check.
// 
// Your function should return either TRUE or FALSE, depending on
// whether the string contains uppercase letters.
//
// For example, if the input string was: "Hello!",
// your function should return TRUE, as the string contained
// an uppercase letter: 'H'.

// Do not change these #defines, or your program will fail the autotests!
#define TRUE 1
#define FALSE !(TRUE)
#include <stdio.h>
#include <stdlib.h>

int upper(char c);

int containsUppercase (char *string) {
	int i = 0;
	int result = FALSE;
	while(string[i]!='\0'){
		if(upper(string[i])){
			result = TRUE;
		}
		i++;
	}
    return result;
}

int upper(char c){
	int result = FALSE;
	if(c >= 'A' && c <= 'Z'){
		result = TRUE;
	}
	return result;
}

int main(int argc, char* argv[]){
	int res = containsUppercase("H");
	printf("Result: %d\n",res);
	return EXIT_SUCCESS;
}
