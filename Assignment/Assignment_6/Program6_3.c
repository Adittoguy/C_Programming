#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEqual
//  Description     :   Used to check given two numbers are equal or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   23/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else 
    {
        return false;
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter Two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal.\n");
    }
    else
    {
        printf("Not Equal.\n");
    }

    return 0;
}