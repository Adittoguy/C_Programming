#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayReverse
//  Description     :   Used to display sequence of number in reverse order form iStart to iEnd
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

void RangeDisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return 0;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
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

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}