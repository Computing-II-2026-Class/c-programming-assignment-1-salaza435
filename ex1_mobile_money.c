/* Name: BUKENYA JOHN NUMBER */
/* Student Number: 25/U/BIO/025/GV */
#include<stdio.h>
int main(){
	float amount1, amount2;
	//amount1 is amount entered by user to be sent
	//amount2 is total amount deducted including the transaction fee
    float fee, fee_amount;
	//fee_amount is the fee charged for sending money
	//fee is percentage charged on amount to send
    printf("Enter amount to send: ");
	scanf("%f", &amount1);
	printf("\nEnter transaction fee: ");
	scanf("%f", &fee);
	
	fee_amount=amount1*fee/100;
	amount2=amount1+(amount1*fee/100);
	printf("\n_____TRANSACTION SUMMARY_____");
	printf("\n Amount sent is %.2f UGX", amount1);
    printf("\n The fee is %.2f UGX",fee_amount);
	printf("\n Total amount deducted is %.2f UGX", amount2);
	return 0;
	
}
