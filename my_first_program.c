#include <stdio.h>
int main(void){
	int number;
	printf("Enter a number bigger than 10:");
	scanf("%d", &number);
	if (number >10){	
	
		printf("The number was: %d\n",number);
	}else{
	
		printf("I asked number bigger than 10, try one more time");
	}
	return 0;
}
