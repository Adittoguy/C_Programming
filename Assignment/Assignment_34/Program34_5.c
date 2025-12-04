////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept character from user and display is decimal, octal and hexadecimal
//  Input           :   Character
//  Output          :   DECIMAL, OCATL, HEXADECIMAL
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   03/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n", ch);
    printf("Octal : %o\n", ch);
    printf("Hexadecimal : %x\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}