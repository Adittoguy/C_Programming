////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Sum
//  Description     :   Recursive program which returns summation of digit number given by user 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/12/2025
//
////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    return ((iNo % 10) + Sum(iNo / 10));
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}// End of Main

/*

        ↓  (Stack grows downward)
        │
    ┌────────────────────────┐
    │ main()                 │
    ├────────────────────────┤
    │ Sum(123)               │
    ├────────────────────────┤
    │ Sum(12)                │
    ├────────────────────────┤
    │ Sum(1)                 │
    ├────────────────────────┤
    │ Sum(0)                 │  ← Base case (current execution)
    └────────────────────────┘

        ↓
        │
    ┌────────────────────────┐
    │ main()     ❌ POPPED   │
    ├────────────────────────┤
    │ Sum(123)   ❌ POPPED   │
    ├────────────────────────┤
    │ Sum(12)    ❌ POPPED   │
    ├────────────────────────┤
    │ Sum(1)     ❌ POPPED   │
    ├────────────────────────┤
    │ Sum(0)     ❌ POPPED   │
    └────────────────────────┘

*/