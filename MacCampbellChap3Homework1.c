

/*Creator: Mac Campbell
Date of creation: 2/27/2025 (27 of feburary)
Description: This program determines the largest and second largest of a pile of numbers entered by the user.


*/

#include <stdio.h>

int number_of_input = 0;
int max_num = 0;
int second_max_num = 0;
int counter = 1;
int user_input_num = 0;


int main()
{
    printf("Please, enter the number of values (positive integer): ");
    scanf_s("%d", &number_of_input);

    if (number_of_input <= 0)
    {
        printf("Invalid Input.");
        return 0;   
    }

    printf("\nPlease, enter an integer number: ");
    scanf_s("%d", &max_num);
    second_max_num = max_num;

    while (counter < number_of_input)
    {
        printf("Please, enter an integer number: ");
        scanf_s("%d", &user_input_num);

        if(user_input_num != max_num)
        {
            if (max_num < user_input_num)
            {
                second_max_num = max_num;
                max_num = user_input_num;
            }
            else if (max_num == second_max_num)
            {
                second_max_num = user_input_num;
            }
            else  if( user_input_num > second_max_num )
            {
                second_max_num = user_input_num;
            }
        }
        counter++;
    }

    printf("The maximum is: %d\n", max_num);
    
    if (number_of_input == 1)
    {
        printf("There is no second maximum.");
    }
    else if (max_num == second_max_num)
    {
        printf("All input the same, no second maximum.");

        
    }
    else 
    {
        printf("The second maximum is: %d", second_max_num);

    }

}