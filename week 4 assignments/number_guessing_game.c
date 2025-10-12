/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 10th october 2025
Description: lets the user guess a random number between 1 and20 until they get right
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secret, guess, attempt=0;
	
	srand(time(0));
	secret = rand()%20 + 1;
	printf("Guess the number (1-20:\n");
	while (1){
		scanf("%d", &guess);
		attempt++;
		if (guess > secret)
			printf("Too high!\n");
		else if (guess < secret)
			printf("Too low!\n");
		else
		{
			printf("congratulations! You guessed it in %d attemps.\n", attempt);
			break;
		}
	}
	return 0;
}