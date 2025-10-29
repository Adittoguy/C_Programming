#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumOfEvenFactors
//  Description     :   Used to display sum of even factors of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

int SumOfEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0 && (iCnt % 2)==0)
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Sum of Even Factors is %d", SumOfEvenFactors(iValue));

    return 0;
}