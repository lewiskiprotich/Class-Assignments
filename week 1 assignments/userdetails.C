// User details program
/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Program to enter and display User details
*/

#include <stdio.h>

int main()
{
    int height;
    int id_no;
    int bank_balance;
    int Shoe_Size;

    printf("Enter your height (in cm): ");
    scanf("%d", &height);

    printf("Enter your ID number: ");
    scanf("%d", &id_no);

    printf("Enter your bank balance: ");
    scanf("%d", &bank_balance);
    
    printf("Enter your shoe size: ");
    scanf("%d", &Shoe_Size);

    printf("You are %d cm tall.\n", height);
    printf("Your ID number is %d.\n", id_no);
    printf("Your bank balance is Ksh %d.\n", bank_balance);
    printf("Your name is %d.\n", Shoe_Size);

    return 0;
}
