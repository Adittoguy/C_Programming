////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountCapital
//  Description     :   Used to Count Capital alphabets in string
//  Input           :   String  
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/11/25
//
////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}