#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DivisiblebyFive
//  Description     :   Used to Check N is divisible by 5 
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   29/10/2025
//
////////////////////////////////////////////////////////////////////////

bool DivisibleByFive(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

// Time complexity :- O(1)

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

    printf("%s, %d is Divisible by 5\n", DivisibleByFive(iValue) ? "Yes" : "No", iValue);

    return 0;
}