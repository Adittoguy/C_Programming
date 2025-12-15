////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Sum
//  Description     :   Recursive program which returns multiplication of digit number given by user 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/12/2025
//
////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return ((iNo % 10) * Mult(iNo / 10));
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

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}// End of Main

/*

        ↓  (Stack grows downward)
        │
    ┌────────────────────────┐
    │ main()                 │
    ├────────────────────────┤
    │ Mult(123)              │
    ├────────────────────────┤
    │ Mult(12)               │
    ├────────────────────────┤
    │ Mult(1)                │
    ├────────────────────────┤
    │ Mult(0)                │  ← Base case (current execution)
    └────────────────────────┘

        ↓
        │
    ┌────────────────────────┐
    │ main()     ❌ POPPED   │
    ├────────────────────────┤
    │ Mult(123)   ❌ POPPED  │
    ├────────────────────────┤
    │ Mult(12)    ❌ POPPED  │
    ├────────────────────────┤
    │ Mult(1)     ❌ POPPED  │
    ├────────────────────────┤
    │ Mult(0)     ❌ POPPED  │
    └────────────────────────┘

*/