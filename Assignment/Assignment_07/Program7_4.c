#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Description     :   Used to print Odd numbers till N numbers
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   24/10/2025
//
////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        if((iCnt % 2)!=0)
        {
            printf("%d\t", iCnt);
        }
    }
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}