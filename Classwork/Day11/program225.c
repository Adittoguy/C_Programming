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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf(" %c", &cValue);              //  added space before %c : Initial space will work for all OS

    iRet = CountOccurance(Arr, cValue);

    printf("Number of %c are : %d\n",cValue, iRet);

    return 0;
}// End of Main
