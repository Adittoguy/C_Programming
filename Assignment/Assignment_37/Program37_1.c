////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkChar
//  Description     :   Used to check character is present
//  Input           :   String
//  Output          :   Boolean
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE; 
            break;       
        }
        else
        {
            bFlag = FALSE;
        }
        str++;
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
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Charcter found");
    }
    else
    {
        printf("Character not found");
    }
}
