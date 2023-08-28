#include <stdio.h>

int main()
{
  FILE *numbers;
	int number1, number2, number3, number4;
		
	numbers = fopen("numbers.s","r");
  	if(numbers == NULL)
  {
    printf("Failed to open the file");
    return 0;
  }

  else 
  {
	int sum;
    fscanf(numbers, "%d %d %d %d", &number1, &number2, &number3, &number4);
		sum = number1+number2+number3+number4;
	fclose(numbers);
	printf("Numbers found in the file numbers.s:\n%d, %d, %d and %d\n\n", number1, number2, number3, number4);
	  
	printf("Sum of the numbers: %d\n", sum); 
  }

  return 0;
}
