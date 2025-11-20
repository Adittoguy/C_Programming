////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Check
//  Description     :   Used to Check given number is divisible by 5 or not
//  Input           :   Integer
//  output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else 
    {
        return false;
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
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }

    return 0;
}