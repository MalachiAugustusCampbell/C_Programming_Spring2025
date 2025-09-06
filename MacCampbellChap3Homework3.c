

/*Creator: Mac Campbell
Date of creation: 2/27/2025 (27 of feburary)
Description: This program adds up each digit in a number.


*/

#include <stdio.h>
#include <math.h>

int num1 = 0;//the integers
int num2 = 0;


int ten_power;//the integer to determine the currect int to add to the total

int counter = 1;// the counter for the third while used to find the total

int total = 0;

int main()
{
     

    //note: 001 does not count as 3 digits
	//
	
		printf("Please, enter your number (postive integer, max of 9 digits): ");//enter number
		scanf_s("%d", &num1);//due to lack of error handling knowlegde this can not be enforced
		
		ten_power = pow(10,(9));

   		num2 = num1 / ten_power;
		
		
		if(num1 == 0)
		{
			printf("The sum of digits is: 0");//specific case. doesn't care if input is any number of zeros: 000 or 0 is still zero

			return 0;
		}
		else if (num1 < 0)
		{
			printf("ERROR: Invalid input: number is not positive or too many digits caused overflow.\n\n");//error message
			return 0;

		}
		
		else
		{
			//placeholder to stop errors
		}
	
		
	
	while(counter < (10))//the while that finds the total
	{
		ten_power = pow(10,(9 - counter));
		//used to find current digit. 4323 / 1000 = 4 (int division)
		num2 = num1 / ten_power;
		
		
		

		total += num2;
		
		num1 = num1 % ten_power;//sets num for next digit

		
	

		counter++;
	}//end of third while
	

	
		
	


	printf("The sum of digits is: %d\n",total);//print statement
	printf("If the sum is wrong you probably entered too many digits.");	
return 0;//end of program
}