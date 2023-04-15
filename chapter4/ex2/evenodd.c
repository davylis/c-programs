#include <stdio.h>

int even_or_odd (int a)
{ 
	int remainder = a % 2;
	if (remainder == 1){
		return 1;
	} else {
	    return 0;
	}
}

int main ()
{
	int number, even, odd;
    printf("Enter an integer: ");
    scanf("%d", &number);
	printf("The number is %d", even_or_odd(number));
	
	return 0;
	}