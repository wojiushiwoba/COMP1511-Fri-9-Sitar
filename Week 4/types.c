#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

	printf("char size: %lu\n",sizeof(char));
	char c = 127;
	printf("char example: %d\n",c);
	c+=1;
	printf("char example post: %d\n",c);
	char x;
	printf("LOOK: %d\n",x);
    return EXIT_SUCCESS;
}

