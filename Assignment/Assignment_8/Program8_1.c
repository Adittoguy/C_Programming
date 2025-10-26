#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Description     :   Used to check N number is small, medium, large 
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   26/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

// Time Complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}