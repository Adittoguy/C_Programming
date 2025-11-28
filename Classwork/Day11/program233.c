////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountDigits
//  Description     :   Count of digits using ascii value
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void CountDigits(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {    
            iCount++;
        }
        str++;
    }
    printf("Number of Digits are : %d\n", iCount);
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    CountDigits(Arr);

    return 0;
}// End of Main
