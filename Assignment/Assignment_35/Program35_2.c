////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Description     :   Used to Count small alphabets in string 
//  Input           :   String 
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/11/2025
//
////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0; 

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        *str++;
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
    char arr[20];
    int iRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}