#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Main
//  Description     :   Used to print full name accepted from user
//  Input           :   String
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   23/10/2025
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char iName [30];
    
    printf("Enter full name: ");
    scanf("%[^\n]s", &iName);               // %[^\n]s :- will read everything till next line.

    printf("Your name is %s", iName);

    return 0;
}

// Time Complexity :- O(n)

// Another alternative is fgets() it is safer and recommended
// syntax :- fgets(iName, sizeof(iName), stdin)