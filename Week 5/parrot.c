#include <stdlib.h>
#include <stdio.h>

char upper(char c);

int main(int argc, char* argv[]){
	char c = 0;
	while(c != EOF){
		c = getchar();
		putchar(upper(c));
	}
    return EXIT_SUCCESS;
}


char upper(char c){
	if(c >= 'a' && c <= 'z'){
		c = c-32;
	}
	return c;
}
