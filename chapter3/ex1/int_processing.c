#include <stdio.h>
int main () 
{
	int first_num;
	float second_num;
	printf("Enter an integer: ");
	scanf("%d", &first_num);
	printf("Enter a decimal number: ");
	scanf("%f", &second_num);
	printf("You entered the integer: %d\n", first_num);
	printf("You entered the decimal number, rounded to two decimal places: %.2f\n", second_num);
	return 0;
}
