#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFactor
//  Description     :   Used to Display non factors of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void NonFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\t", iCnt);
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
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    NonFactor(iValue);

    return 0;
}