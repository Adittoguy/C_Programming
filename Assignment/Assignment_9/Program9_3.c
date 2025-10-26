#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   EvenFactorial
//  Description     :   Used to multiply even factorial of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenFactMul = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iEvenFactMul = iEvenFactMul * iCnt;
        }
    }
    return iEvenFactMul;
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

    iRet = EvenFactorial(iValue);

    printf("Even factorial multiplication of number is %d", iRet);

    return 0;
}