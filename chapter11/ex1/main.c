#include <stdio.h>

 int main () 
{
	int count;
	int i;
	char filename[] = "phonedir.txt";
	
	struct person {
		char firstname[20];
		char lastname[20];
		char telnumber[20];
	};
	
	struct person question_list[50];
	FILE* phone_directory = fopen("phonedir.txt", "w");
	 
	 for(i=0; i<1; i++) {
    	printf("Enter first name:");
	    scanf("%s", &question_list[i].firstname[0]);
	
    	printf("Enter last name:");
    	scanf("%s", &question_list[i].lastname[0]);
	
    	printf("Enter telephone number:");
    	scanf("%s", &question_list[i].telnumber[0]);
		count ++;
	 }
	
	if ((phone_directory = fopen(filename, "w")) == NULL) {
		printf("Error opening the file.");
		return 0;
	} else {
		for(i=0; i<1; i++) {
		    fprintf(phone_directory, "%d\n %s %s %s\n", count, question_list[i].firstname, question_list[i].lastname, &question_list[i].telnumber);
	    }
	}
	fclose(phone_directory);
	printf("Successfully saved the data.");
 return 0;
}