#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindLargestNumber
//  Description     :   Used to Display largest number among 3 numbers
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

int FindLargestNumber(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2)
    {
        if(iNo1 > iNo3)
        {
            return iNo1;
        }
        else
        {
            return iNo3;
        }
    }
    else
    {
        if(iNo2 > iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three number : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = FindLargestNumber(iValue1, iValue2, iValue3);

    printf("Largest number is: %d", iRet);

    return 0;
}