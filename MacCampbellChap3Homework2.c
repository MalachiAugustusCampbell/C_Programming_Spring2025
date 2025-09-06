
/*Creator: Mac Campbell
Date of creation: 2/27/2025 (27 of feburary)
Description: This program prints the first, second, and third power of integers starting from 1 to the user's number.


*/

#include <stdio.h>//includes
#include <math.h>

int counter = 1;// varibles
int user_input = 0;
int power1, power2, power3;

int main()
{
   printf("Please, enter the number of lines (positive integer): ");//enter statment
    scanf_s("%d", &user_input);
  
    if(user_input <= 0) //check for numebers less than 1
   {
    printf("Invalid input: number of lines must be larger than 1.");// inform user of invalid input
      return 0;
   }
   else
   {
    printf("number   number^2   number^3\n");// print for the list of numbers
   }

   while(user_input >= counter )// the fo- i mean while loop
   {    
   
    power1 = counter;//setting the numebrs
    power2 = pow(counter,2);
    power3 = pow(counter,3);
    printf("%6d%10d%11d\n", power1, power2, power3);// printing the powers


        counter++;//counter
   }
return 0;//end of program
}