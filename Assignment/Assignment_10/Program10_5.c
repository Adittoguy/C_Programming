#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SquareMeter
//  Description     :   Used to Convert Square feet to Square meter
//  Input           :   Integer
//  Output          :   Double
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/10/2025
//
////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dSqM = 0.0;
    dSqM = iNo * 0.0929;
    return dSqM;
}

// Time complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dREt = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dREt = SquareMeter(iValue);

    printf("Conversion is : %lf SqM", dREt);

    return 0;
}