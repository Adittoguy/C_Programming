#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print number of star given by user
//  Input           :   Integer
//  Output          :   *
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;
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