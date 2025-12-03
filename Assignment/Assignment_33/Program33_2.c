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
//  Description     :   Used to check weather it is capital character or not
//  Input           :   Character
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL CheckCapital(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A' && ch <= 'Z'))
    {
        bFlag = TRUE;
    }
    else if((ch >= 'a' && ch <= 'z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}// End of Main

