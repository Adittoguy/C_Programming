#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   KMToMeter
//  Description     :   Used to convert distance KM to Meter
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/10/2025
//
////////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iMeter = 0;
    iMeter  = iNo * 1000;
    return iMeter;
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

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meters is : %d", iRet);

    return 0;
}