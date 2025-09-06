/*Creator: Mac Campbell
Date of creation: 2/4/2025 (4 of feburary)
Description: This program determines whether an integer is a multiple of another interger

*/

#include <stdio.h>

int integer1 = 0;// the variables
int integer2 = 0;

int main()
{
    //explaination to the user
    printf("This program determines whether the first number is a multiple of the second number or not.\n\n");
    printf("Please, enter the first numnber: ");
    scanf_s("%d", &integer1);
    printf("Please, enter the second numnber: ");
    scanf_s("%d", &integer2);
    //determining whether integer1 is a multiple of integer2
    if (integer1 == 0 && integer2 == 0)//special circumstance due to an error caused by 0 
    {
        printf("%d is a multiple of %d", integer1, integer2);
    }
    else if (integer2 == 0)//special circumstance due to an error caused by 0 
    {
        printf("%d is not a multiple of %d", integer1, integer2);
    }
    else if (integer1 % integer2 == 0) {
    
        printf("%d is a multiple of %d", integer1, integer2);
        
    }
    else if (integer1 % integer2 != 0) {

        printf("%d is not a multiple of %d", integer1, integer2);
        
    }
    return 0;
}

