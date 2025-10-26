#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print pattern of * # 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t", iCnt);
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
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}