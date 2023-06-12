#include<stdio.h>

int main() {
  float num = 0, sum = 0;
  int count_nums = 0;
  printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
    do {
     printf("Enter score (4-10):");
     scanf("%f", & num);

     if (num >= 4 && num <= 10) {
        sum = sum + num;
       count_nums++;

             }
        }

  while (num != -1);
    printf("You entered %d scores.\nAverage score: %.2f\n",
    count_nums, sum / count_nums);
    
return 0;
}