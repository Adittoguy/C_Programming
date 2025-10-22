#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to prime number of stars given by user
//  Input           :   Integer
//  Output          :   *
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
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

    Display(iValue);

    return 0;
}