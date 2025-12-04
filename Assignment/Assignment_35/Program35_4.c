////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Description     :   Used to check vowel is present in string or not
//  Input           :   String
//  Output          :   BOOLEAN
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   04/11/2025
//
////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bFlag = true;
            break;
        }
        else
        {
            bFlag = false;
        }
        str++;
    }
    return bFlag;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    bool bRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}