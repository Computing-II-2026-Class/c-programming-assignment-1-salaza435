/* Name: BUKENYA JOHN MATHIAS */
/* Student Number: 25/U/BIO/025/GV */
#include<stdio.h>
int main(){
	float units_consumed, cost_per_unit;
	//units consumed is number of electricity units used
	//cost per unit is price per unit in UGX
	printf("Enter units consumed: ");
	scanf("%f", &units_consumed);
	printf("Enter cost per unit in UGX: ");
	scanf("%f", &cost_per_unit);
	float total_electricity_bill;
	//total electricity bill is product of the units and cost of each
	total_electricity_bill=(units_consumed*cost_per_unit);
	
	printf("The total electricity bill is %.2f UGX", total_electricity_bill);
	return 0;
}
