#include <stdio.h>

int main () {
	FILE *vasily;
	vasily = fopen("hello.usr", "w");
	fprintf(vasily, "Hello world!");
	fclose(vasily);
	printf("Writing to the file was successful.\n");
	printf("Closing the program.\n");
	return 0;
}
	