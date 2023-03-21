#include <stdio.h>

int sum (int a, int b)
{
    int result = a+b;
	return result;
}

int difference (int x, int y)
{
	int result = x-y;
	return result;
}

int multiply (int woopsen, int poopsen)
{
	int luntik = woopsen * poopsen;
	return luntik;
}

int main ()
{
	int first_num, second_num;
	printf("Enter the first number:");
	scanf("%d", &first_num);
	printf("Enter the second number:");
	scanf("%d", &second_num);
	
	int result = sum (first_num, second_num);
	printf("%d+%d=%d\n", first_num, second_num, result);
	result = difference (first_num, second_num);
	printf("%d-%d=%d\n", first_num, second_num, result);
	result = multiply (first_num, second_num);
	printf("%d*%d=%d\n", first_num, second_num, result);
	
	return 0;
}
