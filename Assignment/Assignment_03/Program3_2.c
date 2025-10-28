#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Description     :   Used to Display factor of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            if((iNo % 2)==0)
            {
                printf("%d\t",iCnt);
            }
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

    DisplayFactor(iValue);

    return 0;
}