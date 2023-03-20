#include <stdio.h>

int largest(int a, int b, int c);
int smallest(int a, int b, int c);

int main()
{
    int numbers[3], max, min;
    for(int i=1; 3 >= i; i++ )
    {
        printf("Enter the %d number:\n", i);
        scanf("%d", &numbers[i-1]);
    }
    max = largest (numbers[0], numbers[1], numbers[2]);
    min = smallest(numbers[0], numbers[1], numbers[2]);
    printf("Among the numbers you entered,\n"
    "the largest was %d and the smallest was %d.\n",max, min );
    
    return 0;
}

int largest(int a, int b, int c)
{
    if (a > b && a > c) 
    {
        return a;
    }
    if (b > a && b > c) 
    {
        return b;
    }
    if (c > b && c > a)
    {
        return c;
    }
    return 0;
}

int smallest(int a, int b, int c)
{
    if (a < b && a < c) 
    {
        return a;
    }
    if (b < a && b < c) 
    {
        return b;
    }
    if (c < b && c < a)
    {
        return c;
    }
    return 0;
}