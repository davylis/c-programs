#include <stdio.h>
int main ()
{
	long int first_num, second_num, result;
	int operation;
	printf("Enter a first number: ");
	scanf("%ld", &first_num);
	printf("Enter a second number: ");
	scanf("%ld", &second_num);
	printf("Choose from the following:\n1. +\n2. -\n3. *\n4. /\n");
	scanf("%d", &operation);
	if(operation == 1){
		result = first_num + second_num;
	}else if(operation == 2){
		result = first_num - second_num;
	}else if(operation == 3){
		result = first_num * second_num;
	}else if(operation ==4){
		result = first_num / second_num;
	}else{
		printf("You entered a wrong number. Try one more time\n");
		return 1;
	}
	printf("Your number is %ld\n", result);
	return 0;
}
	
