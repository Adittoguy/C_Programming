#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Used to print pattern ($ *)
//  Input           :   Integer
//  Output          :   $   *......
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   24/10/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t",iCnt);
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

    Pattern(iValue);

    return 0;
}