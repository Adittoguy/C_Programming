#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Description     :   Used to convert lowercase to uppercase and vice versa
//  Input           :   Character
//  Output          :   Character
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("%c",cValue+32);
    }
    else if(cValue>='a' && cValue<='z')
    {
        printf("%c", cValue-32);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}