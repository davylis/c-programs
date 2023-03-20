#include <stdio.h>

int largest(int a, int b, int c);
int smallest(int a, int b, int c);

int main()
{
    int num_one, num_two, num_three, max, min;
    printf("Enter the 1. number:");
    scanf("%d", &num_one);
    printf("Enter the 2. number:");
    scanf("%d", &num_two);
    printf("Enter the 3. number:");
    scanf("%d", &num_three);
    max = largest (num_one, num_two, num_three);
    min = smallest (num_one, num_two, num_three);
    printf("Among the numbers you entered,\n"
    "the largest was %d and the smallest was %d.\n",max, min );
    return 0;
}

int largest(int a, int b, int c)
{
    return 0;
}

int smallest(int a, int b, int c)
{
    return 0;
}