////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckAlpha
//  Description     :   Used to check weather you have exam or not
//  Input           :   Character
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    char ch = chDiv;

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    switch(ch)
    {
        case 'A':
            printf("Your exam is at 7AM");
            break;

        case 'B':
            printf("Your Exam is at 8:30");
            break;

        case 'C':
            printf("Your Exam is at 9:20");
            break;

        case 'D':
            printf("Your Exam is at 10:30");
            break;

        default:
            printf("You Don't have Exam");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your Division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
}// End of Main