#include <stdio.h>

int main(){
	
	char name[16], lastname[21], savename1[13];
		printf("The program saves your first and last name into a file.\n");
		printf("Enter your first name:");
		scanf("%s", &name[0]);
		printf("Enter your last name:");
		scanf("%s", &lastname[0]);
		
		printf("File where you want to save your name:");
		scanf("%s", &savename1[0]);
	
		FILE *savename;
		savename = fopen(savename1, "w");
	
		if (savename == NULL){
			printf("Failed to open the file\n");
		    return 0;
		}
	
		fprintf(savename, "%s %s", name, lastname);
	    fclose(savename);
		printf("\nSuccessfully saved the data!\n");
		
		
return 0;
}