////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountCapital
//  Description     :   Used to count capital characters in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


int CountCapital(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')      // A = 97 && Z = 122
        {    
            iCount++;
        }
        str++;
    }
    return iCount;
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
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters are : %d\n", iRet);

    return 0;
}// End of Main
