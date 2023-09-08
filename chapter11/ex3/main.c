#include <stdio.h>
#include <string.h>

struct person {
	char firstname[21];
	char lastname[21];
	char telename[21];
};
		
int main (void)
{
	struct person question_list[50];
	struct person humana;
	int i, delete;
	
	printf("Enter first name:");
	scanf("%s", humana.firstname);
	printf("Enter last name:");
	scanf("%s", humana.lastname);
	
	FILE* phone_directory = fopen("phonedir.txt", "w");
	 
	 for(i=0; i<1; i++) {
	    fscanf(phone_directory, "%d\n %s %s %s\n", &delete, 
			   									 &question_list[i].firstname[0],
			  									 &question_list[i].lastname[0],
			  									 &question_list[i].telename[0]);
		 
		int compare = strcmp(humana.firstname, question_list[i].firstname);
		int compare2 = strcmp(humana.lastname, question_list[i].lastname);
		 
		 if (compare == 0 && compare2 == 0)
		 {
			
			break;
		 }
	 }
	printf("Data removed from the directory.");
	fclose(phone_directory);
	
	return 0;
}
