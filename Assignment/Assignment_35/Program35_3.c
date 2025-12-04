////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Used to Display Difference between small character and capital character
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/11/2025
//
////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        *str++;
    }
    return iCountSmall-iCountCapital; 
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}