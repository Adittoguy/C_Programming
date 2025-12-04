////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastOccur
//  Description     :   return last index value of given character
//  Input           :   String, Character
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

int LastOccur(char str[], char ch)
{
    int iIndex = 0;
    int iLast = -1;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            iLast = iIndex;  
        }
        iIndex++;
    }
    return iLast;
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
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    iRet = LastOccur(arr, cValue);

    printf("Character index: %d", iRet);

    return 0;
}