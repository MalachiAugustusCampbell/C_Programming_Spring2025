

/*Creator: Mac Campbell
Date of creation: 3/2/2025 (2 of march)
Description:  asks the user for the number of terms to give an approximation of pi.

*/

//Important note: the example output given is wrong. It is mathmaticly impossible to go below PI while you are approaching it.

#include <stdio.h>

double Pi = 4;
 
int user_input = 0;
double counter = 3;

int main()
{
    printf("Please, enter the number of terms (positive integer): ");
    scanf_s("%d", &user_input);

    if(user_input < 1)
    {
        printf("Invalid input: number entered was less then 1.");
        return 0;

    }


    for(int i = 0; i < (user_input ); i++ )
    {
        Pi = Pi - (4.0)/(counter);
        Pi = Pi + (4.0)/(counter+2.0);
     
        counter = counter + 4.0;
          
    }

    printf("%f", Pi);
    return 0;

}