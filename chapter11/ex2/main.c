#include <stdio.h>
#include <stdlib.h>

 int main () 
	{
	char *text;
	long numbytes;
	FILE *phone_directory = fopen("phonedir.txt", "r");
	
	if ((phone_directory = fopen("phonedir.txt", "r")) == NULL) {
		printf("Error opening the file.");
		return 1;
	}
		
		fseek(phone_directory, 1L, SEEK_END);
		numbytes = ftell(phone_directory);
		fseek (phone_directory, 1L, SEEK_SET);
		
		text = (char*)calloc(numbytes, sizeof(char));
		if (text == NULL)
		    return 1;
		fread(text, sizeof(char), numbytes, phone_directory);
		fclose(phone_directory);
		
		printf(text);
		
	    return 0;
	}
