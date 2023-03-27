#include <stdio.h>

void total_sum_and_average(float h[], int size);
void entered (float h[], int size);

int main (){
    float hours[days];
    int i;
    int days;

    printf("The program calculates the total hours worked during"
    "a specific period and the average length of a day.\n\n");

    printf("How many days:");
    scanf("%d", &days);
    
    for (i=1;i<=days;i++){
        printf("Enter the working hours for day %d:", i);
        scanf("%f", &hours[i-1]);
    }
    total_sum_and_average(hours, days);
    entered(hours, days);

    return 0;
}

void total_sum_and_average(float h[], int size) {
    float sum =0 ;
    int i;
    for (i=0;i<size;i++)
    {
         sum = h[i] + sum;
    }
    printf("Total hours worked: %.1f\n", sum);

    sum = sum / size;
    printf("Average length of day: %.1f\n", sum);
}

    

void entered(float h[], int size) {

    printf ("Hours entered:");
    for (int i=0;i<size;i++)
    {
     printf(" %.1f", h[i]);
    }

}