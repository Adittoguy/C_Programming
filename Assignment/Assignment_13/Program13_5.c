#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumEvenNumbers
//  Description     :   Used to print sum of Even numbers till N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

int SumEvenNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iSum = iSum + iCnt;
        }
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

    printf("Sum of Even numbers till %d is %d", iValue, SumEvenNumbers(iValue));

    return 0;
}