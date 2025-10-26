#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ReverseTable
//  Description     :   Used to print Reverse table N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

void ReverseTable(int iNo)
{
    if(iNo < 0)
    {
        iNo= -iNo;
    }

    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt * iNo);
    }   
}

// Time Complexity :- O(1)

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

    ReverseTable(iValue);

    return 0;
}