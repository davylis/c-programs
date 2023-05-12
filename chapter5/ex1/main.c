#include <stdio.h>

int even_or_odd (int a)
{
	if (a % 2) {
		return 1;
	}else {
		return 0;
	}
}

int main ()
{	
	int number;
	printf("Enter an integer: ");
    int test_scan = scanf("%d", &number);
	//printf("Result of scanf: %d\n", test_scan);
	
	int result = even_or_odd(number);
	if (result == 1 && test_scan == 1) {
		printf("Number %d is odd.", number);
	} else if (result == 0 && test_scan == 1) { 
		printf("Number %d is even.", number);
	} else {
		printf("You entered a wrong initial.\n");
	}
	
}
	