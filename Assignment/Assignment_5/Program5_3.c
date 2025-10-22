#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Description     :   Used to check given year is leap year or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYr)
{
    if((iYr % 4==0) && (iYr % 100 != 0) || (iYr % 400 == 0))
    {
        printf("%d is a Leap year", iYr); 
    }
    else
    {
        printf("%d is not a Leap year", iYr);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter Year :");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return 0;
}