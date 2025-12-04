////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkDisplay
//  Description     :   Accept character from user and check if it is special symbol or not
//  Input           :   Character
//  Output          :   BOOLEAN
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   03/12/2025
//
////////////////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return false;
    }
    else
    {
        return true;
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
    bool bRet = false;
    
    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}