#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeSum
//  Description     :   Used to display the sum of numbers between iStart to iEnd
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        // printf("%d\t", iCnt);
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
    int iValue1 = 0;
    int iValue2 =0;
    int iRet = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
}