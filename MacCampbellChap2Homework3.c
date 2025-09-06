/*Creator: Mac Campbell
Date of creation: 2/4/2025 (4 of feburary)
Description: this program takes in a integer and puts 3 spaces inbetween each number of the integer.

*/
#include <stdio.h>

int num1 = 0;//the integer
int num2 = 0;
int num3 = 0;
int num4 = 0;
int num5 = 0;
int num6 = 0;
int user_Input = 0;
int temp = 0;

int main()
{
	printf("Please, enter a 5-digit positive number: ");//please enter the 5-digit number
	scanf_s ("%d", &user_Input);
	if (user_Input >= 100000 || user_Input < 10000)//check to make sure the number the user enter was 5-digits
	{
		printf("ERROR: INVALID INPUT: ");//error messages
		if (user_Input >= 100000)
		{
			printf("The number you entered exceeded 5 digits");
		}
		else
		{
			printf("The number you entered was less than 5 digits");
		}

	}
	else
	{
		
		
		num1 = user_Input / 10000;//divid input by current digit
		temp = user_Input % 10000;//find remainder which equals the number in the digit
		printf("%d   ",num1);
		num2 = temp / 1000;
		temp = user_Input % 1000;
		printf("%d   ", num2);
		num3 = temp / 100;
		temp = user_Input % 100;
		printf("%d   ", num3);
		num4 = temp / 10;
		temp = user_Input % 10;
		printf("%d   ", num4);
		num5 = temp / 1;
		temp = user_Input % 1;
		printf("%d   ", num5);
		
			
		
	}
	return 0;//end program
}
