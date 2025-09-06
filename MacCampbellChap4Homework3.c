
/*Creator: Mac Campbell
Date of creation: 3/2/2025 (2 of march)
Description: 

*/

#include <stdio.h>

int user_input = 1;//int

int main()
{
    printf("Enter 0 to exit.\n");  
    
    while(user_input != 0)
    {
       
       
        printf("Please, enter a number (from 1 to 28): ");
        scanf_s("%d", &user_input);//the scan

        switch (user_input)//switch statement
        {
        case 1:
            printf("The character is: z\n");
            break;
        case 2:
            printf("The character is: y\n");
            break;
        
        case 3:
            printf("The character is: x\n");
            break;

            case 4:
            printf("The character is: w\n");
            break;

            case 5:
            printf("The character is: v\n");
            break;

        case 6:
        printf("The character is: u\n");
        break;

        
        case 7:
            printf("The character is: t\n");
            break;

            
        case 8:
        printf("The character is: s\n");
        break;

        
        case 9:
            printf("The character is: r\n");
            break;

            
        case 10:
        printf("The character is: q\n");
        break;

        
        case 11:
            printf("The character is: p\n");
            break;

            
        case 12:
        printf("The character is: o\n");
        break;

        
        case 13:
            printf("The character is: n\n");
            break;

            
        case 14:
        printf("The character is: m\n");
        break;

        
        case 15:
            printf("The character is: l\n");
            break;

            case 16:
            printf("The character is: k\n");
            break;
            
            case 17:
            printf("The character is: j\n");
            break;
            
            case 18:
            printf("The character is: i\n");
            break;

            case 19:
            printf("The character is: h\n");
            break;
            
            case 20:
            printf("The character is: g\n");
            break;

             
            case 21:
            printf("The character is: f\n");
            break;
             
            case 22:
            printf("The character is: e\n");
            break;
             
            case 23:
            printf("The character is: d\n");
            break;
             
            case 24:
            printf("The character is: c\n");
            break;
             
            case 25:
            printf("The character is: b\n");
            break;
             
            case 26:
            printf("The character is: a\n");
            break;
             
            case 27:
            printf("The character is: !\n");
            break;
             
            case 28:
            printf("The character is: ?\n");
            break;
            
            case 29://stops the switch from looping infinitly
            
            break;
 
            case 0:
            printf("Thank you.");
            break;

        default:
            
            user_input = 29;
            printf("ERROR: Invalid input.\n");
            break;
        }
        
    }




    return 0;
}
