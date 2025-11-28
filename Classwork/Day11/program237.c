////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrX
//  Description     :   Convert lowercase character to uppercase charcter form string
//  Input           :   String
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void strlwrX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {    
            *str = *str + 32;
        }
        str++;
    }
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

    strlwrX(Arr);

    printf("Updated string is: %s \n", Arr);

    return 0;
}// End of Main
