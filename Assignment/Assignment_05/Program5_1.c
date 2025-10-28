#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Description     :   Used to Check even or odd number
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0)
    {
        printf("%d is even",iNo);
    }
    else
    {
        printf("%d is Odd", iNo);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}