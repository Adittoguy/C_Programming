#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNaturalNumbers
//  Description     :   Used to print sum of numbers till N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

int SumNaturalNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

// Time complexity :- O(n)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    printf("Sum of numbers till %d is %d",iValue,SumNaturalNumbers(iValue));

    return 0;
}