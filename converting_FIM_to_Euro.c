#include <stdio.h>
int main ()
{
	//float conversion_fac = 5.94573;
	float markka, euro;
	printf("Enter an amount in FIM: ");
	scanf("%f", &markka);
	euro = markka / 5.94573;
	printf("FIM converted to euro: %.2f\n", euro);

	return 0;
}