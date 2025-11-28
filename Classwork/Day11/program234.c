////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSpace  
//  Description     :   Count number of spaces in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void CountSpace(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {    
            iCount++;
        }
        str++;
    }
    printf("Number of Spaces are : %d\n", iCount);
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

    CountSpace(Arr);

    return 0;
}// End of Main
