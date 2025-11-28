////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountOccurance
//  Description     :   used to count occurance of character ch in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////


int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch))
        {    
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountOccurance(Arr, 'd');

    printf("Number of Occurances are : %d\n", iRet);

    return 0;
}// End of Main
