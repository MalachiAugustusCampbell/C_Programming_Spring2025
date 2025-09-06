
/*Creator: Mac Campbell
Date of creation: 4/13/2025 (13 of April)
Description: This program takes two numbers and finds the GCD of the two.

*/

#include <stdio.h>


//the prototypes
void gcdNonRecursive(int lit_num, int lar_num);

int gcdRecursive(int lit_num, int lar_num);

 int main()
{
	
	int num1;
	int num2;
	

	printf("Please, enter two integer numbers: ");
	scanf_s("%d%d", &num1, &num2);
	
	if (num1 < 0)//absolute value for the functions
	{
		num1 *= -1;
	}
	if (num2 < 0)
	{
		num2 *= -1;
	}
	//sorts the numbers
	if (num2 < num1)
	{
		int hold = num1;
		num1 = num2;
		num2 = hold;
	}

	
	gcdNonRecursive(num1, num2);

	int Recur_factor = gcdRecursive(num1, num2);

	printf("\nThe greatest common divisor is (using a recursive function): %d", Recur_factor);
	puts("");
	return 0;


}//end of main

 void gcdNonRecursive(int lit_num, int lar_num)//very readable
 {
	 
	
	 
		


		 int factor = 0;
		 int counter = 1;//the counter to find the factor
		 while (lar_num + 1  != counter)//the largest factor must be less than the largest number
		 {
			 if ((lar_num % counter == 0) && (lit_num % counter == 0))
			 {
				 //if both remainders are zero then counter must be a factor
				 factor = counter;
				

			 }
			 counter++;
		 }//end while
		
		 printf("\nThe greatest common divisor is (using a non-recursive function): %d", factor);
	 
 }//end of gcdNonRecursive

 int gcdRecursive(int lit_num, int lar_num)//compressed to unreadability
 {
	 
	  if (lar_num != 0)
	 {
		
		  gcdRecursive(lar_num, lit_num % lar_num);
		 

	 }
	  //basicallly if you had 30 and 13 then the remainder would be 4
	  //then 13 and 4 would leave remainder 1
	  //then 4 and 1 would leave remainder 0
	  //meaning that the GCD is 1
	 else 
	 {
		 
		 return lit_num;
	 }
	 

 }//end of gcdRecursive
