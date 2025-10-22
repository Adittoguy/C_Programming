#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFactors
//  Description     :   Used to Display sum of non factors of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSumNonfac =0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo %iCnt) !=0)
        {
            iSumNonfac = iSumNonfac + iCnt;
        }
    }
    return iSumNonfac;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFactors(iValue);

    printf("%d", iRet);

    return 0;
}