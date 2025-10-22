#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumberType
//  Description     :   Used to check weather number is positive,negative or zero
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("It is Positive Number");
    }
    else if(iNo < 0)
    {
        printf("It is Negative Number");
    }
    else
    {
        printf("It is Zero");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iNum = 0;

    printf("Enter number: ");
    scanf("%d", &iNum);

    CheckNumberType(iNum);

    return 0;
}