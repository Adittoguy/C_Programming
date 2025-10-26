#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Description     :   Used to multiply Odd factorial of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iOddFactMul = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            iOddFactMul = iOddFactMul * iCnt;
        }
    }
    return iOddFactMul;
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial multiplication of number is %d", iRet);

    return 0;
}