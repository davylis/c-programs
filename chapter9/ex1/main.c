#include <stdio.h>

int main () {
	FILE *vasily;
	vasily = fopen("hello.usr", "w");
	if (vasily != NULL){
		printf("Writing to the file was successful.\n");
		fprintf(vasily, "Hello world!\n");
	}
	fclose(vasily);
	printf("Closing the program.\n");
	return 0;
}
	