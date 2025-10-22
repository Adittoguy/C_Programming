#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultiplyFactor
//  Description     :   Used to multiply all the factors 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

int MultiplyFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            // printf("%d\t",iCnt);
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiplyFactor(iValue);

    printf("%d\n", iRet);

    return 0;
}