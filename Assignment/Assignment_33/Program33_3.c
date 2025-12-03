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
//  Description     :   Used to check weather it is Digit or not
//  Input           :   Character
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= '0' && ch <= '9'))
    {
        bFlag = TRUE;
    }
    else
    {
        bFlag = FALSE;
    }

    return bFlag;
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

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}// End of Main

