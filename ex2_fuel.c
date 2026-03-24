/* Name: BUKENYA JOHN MATHIAS */
/* Student Number: 25/U/BIO/025/GV */
#include<stdio.h>
int main(){
	//distance is the total distance travelled in km
	//fuel is the total fuel used in litres
	double distance, fuel;
	printf("Enter distance travelled in km: ");
	scanf("%lf", &distance);
	printf("\nEnter fuel used in litres: ");
	scanf("%lf", &fuel);
    //efficiency is the fuel used per kilometre	
	double efficiency;
	efficiency=(distance/fuel);
	
	printf("Fuel efficiency is %.2lf in km/l", efficiency);
	
	return 0;
}
