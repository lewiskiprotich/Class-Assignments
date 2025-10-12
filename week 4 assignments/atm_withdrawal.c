/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 10th october 2025
Description: simulates bank withdrawal until the account balance reaches zero or below
*/
#include <stdio.h>
int main()
{
	float balance, withdraw;
	
	printf("Enter initial balance: ");
	scanf("%f", &balance);
	
	while (balance > 0){
		printf("enter amount to withdraw: ");
		scanf("%f", &withdraw);
		
		balance -= withdraw;
		printf("Remaining balance: %.2f\n", balance);
	}
	printf("Account balance is zero or negative. Transaction stopped.\n");
	return 0;
}