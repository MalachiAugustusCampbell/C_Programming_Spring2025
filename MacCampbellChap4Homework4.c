

/*Creator: Mac Campbell
Date of creation: 3/2/2025 (2 of march)
Description:

*/

#include <stdio.h>

char operatr;
double first_num = 0;
double second_num = 0;
double answer = 0;

int main()
{
    while (operatr != 'q')
    {//the explaination
        printf("+ for addition.\n- for subtraction.\n* for multiplication.\n/ for floating-point division.\nq to exit.\n\n");
        
        printf("Please, enter the operation: ");//user enters an the operator
        scanf_s(" %c", &operatr, 1);
        if (operatr == 'q')
        {
            printf("Thank you, come again.");
            return 0;
        }
        

        if (operatr == '+')//addition
        {
            printf("Please, enter the first number: ");
        scanf_s("%lf", &first_num);//
        
        printf("Please, enter the second number: ");
        scanf_s("%lf", &second_num);

            answer = first_num + second_num;

            printf("%.2f + %.2f = %.2f\n\n", first_num, second_num, answer);
        }
        else if (operatr == '-')//subtraction
        {
            printf("Please, enter the first number: ");
        scanf_s("%lf", &first_num);//
        
        printf("Please, enter the second number: ");
        scanf_s("%lf", &second_num);

            answer = first_num - second_num;

            printf("%.2f - %.2f = %.2f\n\n", first_num, second_num, answer);

        }
        else if (operatr == '*')//multiplication
        {
            printf("Please, enter the first number: ");
            scanf_s("%lf", &first_num);//
            
            printf("Please, enter the second number: ");
            scanf_s("%lf", &second_num);

            answer = first_num * second_num;

            printf("%.2f * %.2f = %.2f\n\n", first_num, second_num, answer);

        }
        else if (operatr == '/')//division
        {
            printf("Please, enter the first number: ");
        scanf_s("%lf", &first_num);//
        
        printf("Please, enter the second number: ");
        scanf_s("%lf", &second_num);

            answer = first_num / second_num;
            if (second_num == 0)
            {
                printf("Division by zero is not allowed.\n\n");

            }
            else
            {
                printf("%.2f / %.2f = %.2f\n\n", first_num, second_num, answer);
            }

        }
        else
        {
            printf("Incorrect operation.\n\n");


        }
        
    }


}
