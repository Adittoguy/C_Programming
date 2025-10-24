#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Description     :   Used to print 5 Multiple of N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   24/10/2025
//
////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }

    // iCnt = 1;
    // while(iCnt <= 5)
    // {
    //     printf("%d\t", iNo * iCnt);
    //     iCnt++;
    // }
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

    MultipleDisplay(iValue);

    return 0;
}      