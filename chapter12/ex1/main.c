#include<stdio.h>

void change_number(int x);

int main()
{
  int x;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("In the main program: x = %d\n", x);
  change_number(x);
  printf("In the main program: x = %d\n", x);
  return 0;
} 
	void change_number(int x)
{
		int* ptr =&x;
		*ptr+=3;
   		printf("In the subroutine: x = %d\n", *ptr);
}