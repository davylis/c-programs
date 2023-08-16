#include <stdio.h>

void sum(int a, int b);
void difference(int a, int b);
void multiplication(int a, int b);

void main()
{
  int choice, first_num, second_num;
  do{

    printf("1: sum of two numbers\n"
    "2: difference of two numbers\n"
    "3: product of two numbers\n"
    "<0: terminate the program\n");
    printf("Select calculation:\n");
    scanf("%d", &choice);
    if (choice > 0){
      printf("Enter the first number:");
      scanf("%d", &first_num);
      printf("Enter the second number:");
      scanf("%d", &second_num);
    }


    if(choice < 0) {
      printf("Terminating the program...");
    }
    else if(choice == 1) {
      sum(first_num, second_num);
    }
    else if(choice == 2) {
      difference(first_num, second_num);
    }
    else if(choice == 3) {
      multiplication(first_num, second_num);
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
    printf("\n\n");
  }while(choice>=0);
} 

void sum(int a, int b){
  int result = a+b;
  printf("%d + %d = %d", a, b, result);
}
void difference(int a, int b){
    int result = a-b;
  printf("%d - %d = %d", a, b, result);
}
void multiplication(int a, int b){
    int result = a*b;
  printf("%d * %d = %d", a, b, result);
}
