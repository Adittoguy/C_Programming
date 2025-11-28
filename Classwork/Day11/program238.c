////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrX
//  Description     :   Convert uppercase character to lowercase charcter form string
//  Input           :   String
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void struprX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {    
            *str = *str - 32;
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

    struprX(Arr);

    printf("Updated string is: %s \n", Arr);

    return 0;
}// End of Main
