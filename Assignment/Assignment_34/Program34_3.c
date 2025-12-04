////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept character from user and if it is capital then display characters till Z and if it is small the print characters till a
//  Input           :   Character
//  Output          :   Character ......
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   03/12/2025
//
//
////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c", ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c", ch);
            ch--;
        }
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

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}