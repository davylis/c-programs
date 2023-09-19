#include <stdio.h>

int *address_of_smallest_value(int *numbers, int size);

int main(void)
{
    int numbers[] = {21, 55, 5, 3, 43};
    int size = 5;

    int*smallest = address_of_smallest_value(numbers, size);

    printf("The smallest number in the array is: %d", *smallest);
    return 0;
}
int *address_of_smallest_value(int *numbers, int size) {	
	int min = numbers[0];
	int i;
  	for(i=1; i<size; i++){
		if(numbers[i] < min) {    
        	min = numbers[i];
		}
	}
	int *tmp = &min;
	return tmp;
}