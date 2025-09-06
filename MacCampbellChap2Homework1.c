/*Creator: Mac Campbell
Date of creation: 2/4/2025 (4 of feburary)
Description: This program determines the maximum integer of two integers

*/
#include <stdio.h>
int interger1, interger2;// the variables

int main()
{
    printf("This program will tell you maximum integer of two integers you enter\n\n");//explaintion to the user
    printf("Please, enter the first interger: ");
    scanf_s("%d", &interger1);
    printf("Please, enter the second interger: ");
    scanf_s("%d", &interger2);
    
    
    if (interger1 >= interger2)//determining the bigger of the two
    {
        printf(" %d is the maximum number.", interger1);
        
    }
    else
    {
        printf(" %d is the maximum number.", interger2);
        
    };
    return 0;
}
