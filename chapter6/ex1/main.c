#include<stdio.h> 
int main() 
{ 
   unsigned int num;
	   printf("Enter an integer: ");
	   scanf("%d\n", &num);
   for (int i = 1; i<= num; i++) {
	   printf("%d\n", i);
	   }
    return 0; 
} 