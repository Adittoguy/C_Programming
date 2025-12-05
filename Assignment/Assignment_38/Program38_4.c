////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strcpysmall
//  Description     :   Used to convert capital character to small character of string
//  Input           :   String
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void strcpysmall(char * str, char * dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
        }
        else
        {
            *dest = *str;
        }
        dest++;
        str++;
    }
    *dest = '\0';
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr [30] = "Marvellous Python 2";
    char brr [30] = {'\0'};

    strcpysmall(arr , brr);

    printf("%s", brr);

    return 0;
}