#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountFactors
//  Description     :   Used to Count number of positive factors of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iCount++;
        }
    }
    return iCount;
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Number of factors for given number is %d", CountFactors(iValue));

    return 0;
}