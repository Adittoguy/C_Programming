#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Description     :   Used to print Factorial of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 1;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

// Time Complexity :- O(n)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}