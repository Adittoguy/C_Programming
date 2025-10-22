#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayEvenFactor
//  Description     :   Used to Display even factors of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo%iCnt == 0 && iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
