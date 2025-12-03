////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strrevX(char *str)
{
    char temp = '\0';
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^\n]s", Arr);

    strrevX(Arr);

    printf("Updated String is : %s\n", Arr);

    return 0;
}