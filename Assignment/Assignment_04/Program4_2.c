#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ReverseFactor
//  Description     :   Used to Display factors in reverse order
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void FactorReverse(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for (iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt)==0)
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

    FactorReverse(iValue);

    return 0;
}