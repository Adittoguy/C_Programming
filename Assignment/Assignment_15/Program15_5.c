#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountDiff
//  Description     :   Used to accept number and Display difference of iEven and iOdd
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   30/10/2025
//
////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2)==0)
        {
            iEven += iDigit;
        }
        else
        {
            iOdd += iDigit;
        }

        iNo = iNo / 10;
    }
    iDiff = iEven - iOdd;
    return iDiff;
}

// Time complexity :- O(log n)

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

    iRet = CountEven(iValue);

    printf("%d", iRet);

    return 0;
}