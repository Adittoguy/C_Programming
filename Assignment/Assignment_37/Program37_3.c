////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FirstOccur
//  Description     :   return index value of given character
//  Input           :   String, Character
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

int FirstOccur(char str[], char ch)
{
    int iIndex = 0;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            return iIndex;  
            break;
        }
        iIndex++;
    }
    return -1;
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

    iRet = FirstOccur(arr, cValue);

    printf("Character index: %d", iRet);

    return 0;
}