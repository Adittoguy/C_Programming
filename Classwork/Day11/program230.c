////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountAll
//  Description     :   used to display both small as well as capital character count
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {    
            iCountCapital++;
        }
        else                                // else will include everything in it like spaces special characters too
        {
            iCountSmall++;
        }
        str++;
    }
    printf("Number of capital characters are : %d\n", iCountCapital);
    printf("Number of small characters are : %d\n", iCountSmall);
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

    CountAll(Arr);

    return 0;
}// End of Main
