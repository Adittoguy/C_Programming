#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Display5to1
//  Description     :   Used to display the numbers form 5 to 1 on screen
//  Input           :   -
//  output          :   5   4   3   2   1
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

void Display5to1()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    Display5to1();

    return 0;
}