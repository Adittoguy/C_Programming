#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindMaxNumber
//  Description     :   Used to Display largest number among two
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

int FindMaxNumber(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
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
    int iRet = 0;

    printf("Enter two number : ");
    scanf("%d %d", &iValue1, &iValue2);

    iRet = FindMaxNumber(iValue1, iValue2);

    printf("Greater number is: %d", iRet);

    return 0;
}