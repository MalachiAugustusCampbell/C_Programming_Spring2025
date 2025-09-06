
/*Creator: Mac Campbell
Date of creation: 4/13/2025 (13 of April)
Description: This program takes a number and reverses the order.

*/

#include <stdio.h>
#include <math.h>



//prototype
void reverse_digits(int user_input);

int main()
{
	int digits = 0;
	int check = 0;
	
	
	while (check == 0) {//checks for amount of digits
		printf("Please, enter a positive integer number (max of 9 digits): ");
		scanf_s("%d", &digits);

		if (digits >= pow(10, 9 ))
		{
			printf("ERROR: number exceeds 9 digits.\n");

		}
		else if( digits <= 0)
		{
			printf("ERROR: number cannot be less than 1.\n");

		}
		else {
			check = 1;

		}
	}

	reverse_digits(digits);

	return 0;


}//end of main

void reverse_digits(int user_input)
{
	//the varibles for the func
	int num1 = 0;
	int num2 = 0;
	int num_digits = 0;
	int digit_find = 1;
	int counter1 = 0;
	int ten_power = 1;

	while (digit_find >= 1)//finds the number of digits
	{

		digit_find = user_input / (pow(10, counter1));

		if (digit_find >= 1)
		{
			num_digits++;
		}
		counter1++;


	}

	int invert = 0;
	int counter2 = 0;

	num1 = user_input;

	for (int i = num_digits; i > 0; i--)//getting the inverted number
	{
		ten_power = pow(10, i - 1);
		num2 = num1 / ten_power;

		invert += num2 * pow(10, counter2);


		num1 = num1 % ten_power;


		counter2++;
	}
	printf("\nThe number after reverse its digits is: %d", invert);

}//end of reverse digits
