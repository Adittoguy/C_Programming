////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Strlen
//  Description     :   Accept string from user and count number of character
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/12/2025
//
////////////////////////////////////////////////////////////////////////

int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return (1 + Strlen(str + 1));
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}// End of Main

/*

      ↓  (Stack grows downward)
      │
┌────────────────────────┐
│ main()                 │
├────────────────────────┤
│ Strlen("ABC")          │  // str → 'A'
├────────────────────────┤
│ Strlen("BC")           │  // str → 'B'
├────────────────────────┤
│ Strlen("C")            │  // str → 'C'
├────────────────────────┤
│ Strlen("")             │  // str → '\0' (base case)
└────────────────────────┘


      ↓
      │
┌────────────────────────┐
│ main()      ❌ POPPED  │
├────────────────────────┤
│ Strlen("ABC")❌ POPPED │
├────────────────────────┤
│ Strlen("BC") ❌ POPPED │
├────────────────────────┤
│ Strlen("C")  ❌ POPPED │
├────────────────────────┤
│ Strlen("")   ❌ POPPED │
└────────────────────────┘


*/