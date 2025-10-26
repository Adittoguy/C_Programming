#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayName
//  Description     :   Used to Display name of N number 
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayName(int iNo)
{
    switch(iNo)
    {
        case 0:
            printf("Zero");
            break;
        
        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("Four");
            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;

        default:
            printf("Invalid Number.");
        
    }   

    // Time Complexity :- O(1)(In case of switch case beacoz of jump table)

    char *Names[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if(iNo >= 0 && iNo <= 9)
    {
        printf("%s\n", Names[iNo]);
    }
    else
    {
        printf("Invalid Number.\n");
    }
    // Time Complexity :- O(1)
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayName(iValue);

    return 0;
}