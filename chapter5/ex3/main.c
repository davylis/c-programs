#include <stdio.h>

int main ()
{       
long int num_1, num_2, operation, result;
printf(" 1: subtraction\n 2: addition\n 3: multiplication\n Select function:\n");
scanf("%ld", &operation);
printf("Enter the first number:\n");
scanf("%ld", &num_1);
printf("Enter the second number:\n");
scanf("%ld", &num_2);

switch (operation) {
     case 1:
        result = num_1 - num_2;
        printf("%ld-%ld=%ld\n", num_1, num_2, result);
        break;
     case 2:
        result = num_1 + num_2;
        printf("%ld+%ld=%ld\n", num_1, num_2, result);
        break;
     case 3:
        result = num_1 * num_2;
        printf("%ld*%ld=%ld\n", num_1, num_2, result);
        break;
     default:
        printf("Enter another NUMBER in funtion section\n");
}

 return 0;
}
