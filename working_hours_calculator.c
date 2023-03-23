#include <stdio.h>

void total_sum(float h[]);
void average ();
void entered ();

int main (){
    int days;

    printf("The program calculates the total hours worked during"
    "a specific period and the average length of a day.\n\n");
    printf("How many days:");
    scanf("%d", &days);
    float hours[days];
    int i;
    for (i=1;i<=days;i++){
    printf("Enter the working hours for day %d:", i);
    scanf("%f", &hours[i-1]);
    }

    //Enter workinkg hours(index+array)
    //sum of working hours (+)
    //average of hours(do-while)
    //hours entered (a, b, c)
    return 0;
}
    void total_sum(float hours[]) {
        float sum;
        float hours[sum];
        float i;
        for (i=0;i<=sum;i++){
        printf("Total hours worked: %.2f", i);
        scanf("%f", &time[i+1]);
        }
        return 0
    }

void average()

void entered()