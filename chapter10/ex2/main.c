#include <stdio.h>
#include <ctype.h>

int main(){
	int count=0, i=0;
	char word[16];
	printf("The program calculates the number of vowels.\n");
	
	printf("Enter a word:");
	scanf("%s", word);
	
	while(word[i] != '\0'){
		char buffer = tolower(word[i]);
		if (buffer == 'a' || buffer == 'e' 
			|| buffer == 'i' || buffer == 'o' 
		    || buffer == 'u' || buffer == 'y')
		{
			count++;
		}
		i++;
	}
		
	
	printf("The word contains %d vowels.", count);
	
	return 0;
}
	