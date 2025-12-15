////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Fact
//  Description     :   accept number from user and return its factorial
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/12/2025
//
////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return (iNo * Fact(iNo - 1));
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : ");
    scanf("%D", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}// End of Main

/*

      ↓  (Stack grows downward)
      │
┌────────────────────────┐
│ main()                 │
├────────────────────────┤
│ Fact(4)                │
├────────────────────────┤
│ Fact(3)                │
├────────────────────────┤
│ Fact(2)                │
├────────────────────────┤
│ Fact(1)                │
├────────────────────────┤
│ Fact(0)                │  ← Base case (current execution)
└────────────────────────┘


      ↓
      │
┌────────────────────────┐
│ main()     ❌ POPPED   │
├────────────────────────┤
│ Fact(4)    ❌ POPPED   │
├────────────────────────┤
│ Fact(3)    ❌ POPPED   │
├────────────────────────┤
│ Fact(2)    ❌ POPPED   │
├────────────────────────┤
│ Fact(1)    ❌ POPPED   │
├────────────────────────┤
│ Fact(0)    ❌ POPPED   │
└────────────────────────┘


*/