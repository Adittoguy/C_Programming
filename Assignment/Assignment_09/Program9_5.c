#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactorialDifference
//  Description     :   Used to multiply even factorial and odd factorial and find difference of them 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

int FactorialDifference(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenFactMul = 1;
    int iOddFactMul = 1;
    int iFactDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iEvenFactMul = iEvenFactMul * iCnt;
        }
        else
        {
            iOddFactMul = iOddFactMul * iCnt;
        }
    }

    iFactDiff = iEvenFactMul - iOddFactMul;
    return iFactDiff;
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
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = FactorialDifference(iValue);

    printf("Even factorial multiplication of number is %d", iRet);

    return 0;
}