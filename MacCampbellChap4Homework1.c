
/*Creator: Mac Campbell
Date of creation: 3/2/2025 (2 of march)
Description: prints 4 right triangles made out of stars.

*/



#include <stdio.h>
//the single int not belonging to a for loop

int user_input = 0;
 


int main()
{

   //ask the user for input
    printf("Please, enter the number of lines (positive integer): ");
//get the ubteger
    scanf_s("%d", &user_input);
    
    if(user_input <= 0)
    {
        printf("Invalid input.");

    }
    
    //first for loop to make triangle
    for(int counter1 = 0;counter1 < (user_input+1); counter1++)
    {
    
        for (int i = 0; i < counter1; i++)
        {
            printf("*");

        }
        
        printf("\n");

    

    }                 

    printf("\n");

    //second for loop to make triangle
    for(int counter1 = 0;counter1 < (user_input); counter1++)
    {
    
        for (int i = (user_input ); i > counter1; i--)
        {
            printf("*");

        }
        
        printf("\n");

    

    }   

    printf("\n");

    //third for loop  to make triangle
    for(int counter1 = 0;counter1 < (user_input); counter1++)
    {

        
        for (int i = 0; i < counter1; i++)
        {
            printf(" ");

        }
        
        
        for(int i = (user_input); i > (counter1); i--)
        {
            printf("*");


        }
        printf("\n");
    
    
    
    }
    
    //printf("\n"); // this slashed out because the previous for loop takes care of newline


    //fourth for loop  to make triangle
    for(int counter1 = 0;counter1 < (user_input+1); counter1++)
    {

        for(int i = (user_input); i > counter1; i--)
        {
            printf(" ");


        }
        
        for (int i = 0; i < counter1; i++)
        {
            printf("*");

        }

        printf("\n");

    }
    //i'd give better descriptions of each for loop but i don't know triangle terminology


    //end of main
    return 0;
}//end of program
