#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Accept
//  Description     :   Used to display number of * after taking input from user
//  Input           :   Integer
//  output          :   Symbol
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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

    printf("Enter number :");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}