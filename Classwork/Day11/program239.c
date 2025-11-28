////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strtoggleX
//  Description     :   Used to convert string into uppercase where it is in lowercase and vice versa
//  Input           :   String
//  Output          :   Character
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


void strtoggleX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {    
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
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

    strtoggleX(Arr);

    printf("Updated string is: %s \n", Arr);

    return 0;
}// End of Main
