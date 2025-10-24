#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Percentage
//  Description     :   Used to check percentage
//  Input           :   Integer
//  Output          :   Float
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   23/10/2025
//
////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fResult = 0.0f;

    if(iNo1 == 0)
    {
        // printf("Error: Total marks cannot be zero\n");
        return 0.0f;
    }

    fResult = ((float)iNo2/(float)iNo1) * 100;
    return fResult;
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
    float fRet = 0.0f;

    printf("Enter total marks: ");
    scanf("%d", &iValue1);

    printf("Enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%0.3f", fRet);

    return 0;
}