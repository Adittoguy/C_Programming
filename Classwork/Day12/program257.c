////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strcatX(char *src, char *dest)
{
    
    while( *src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }   
    *dest = '\0';
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^\n]s", Arr);

    strcpyX(Arr, Brr);

    printf("Copied string is : %s\n", Brr);

    return 0;
}