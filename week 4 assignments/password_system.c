/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 10th october 2025
Description: repeatedly prompts for a password until the correct one is entered
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char password [10];
	do{
		printf("Enter password: ");
		scanf("%s", password);
	} while (strcmp(password, "1234")!=0);
	printf("Access granted.\n");
	return 0;
}