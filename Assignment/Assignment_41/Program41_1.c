////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Recursive program to display givrn pattern
//  Input           :   Integer   
//  Output          :   Pattern
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    printf("%d\t*\t", iNo);
    
    Display(iNo - 1);
}// End of Function

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
}// End of Main



/*

    Stack Layout

        ↓
        │
    ┌────────────────────────┐
    │ main()      ❌ POPPED  │
    ├────────────────────────┤
    │ Display(3)  ❌ POPPED  │
    ├────────────────────────┤
    │ Display(2)  ❌ POPPED  │
    ├────────────────────────┤
    │ Display(1)  ❌ POPPED  │
    ├────────────────────────┤
    │ Display(0)  ❌ POPPED  │
    └────────────────────────┘


*/