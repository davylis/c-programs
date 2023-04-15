#include <stdio.h>

int main(void)
{
  int number = 0;
  printf("Enter an integer: ");
  scanf("%d",&number);
  printf("The number is %d\n",(number%2));
  return 0;
}
