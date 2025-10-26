#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DollarToINR
//  Description     :   Used to Convert the currency from Dollar to Rupees 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iDol = 0;
    iDol = iNo * 70;
    return iDol;
}

// Time complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Dollar of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;
}