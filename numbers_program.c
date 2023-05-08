#include <stdio.h>

int main(){
	
	char name[15], lastname[20], savename1[12];
		printf("The program saves your first and last name into a file.\n");
		printf("Enter your first name:\n");
		scanf("%s", &name[0]);
		printf("Enter your last name:\n");
		scanf("%s", &lastname[0]);
		
		printf("File where you want to save your name:\n");
		scanf("%s", &savename1[0]);
	
		FILE *savename;
		savename = fopen(savename1, "r");
		if (savename == NULL){
			printf("Failed to open the file\n");
		return 0;
		}
		if (savename != NULL){
			fprintf(savename, "name[0], lastname[0]\n");
			printf("Successfully saved the data!\n");
		return 0;
		}
		fclose(savename);
return 0;
}