#include <stdio.h>
int main(void){
	int number;
	printf("Enter a number bigger than 11:");
	scanf("%d", &number);
	if (number >11){	
	
		printf("The number was: %d\n",number);
	}else{
	
		printf("I asked number bigger than 10, try one more time");
	}
	return 0;
}
