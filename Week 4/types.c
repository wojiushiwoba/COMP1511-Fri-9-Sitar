#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

	printf("int size: %lu\n",sizeof(int));
	char c = 127;
	printf("char example: %d\n",c);
	c+=1;
	printf("char example post: %d\n",c);
	
    return EXIT_SUCCESS;
}

