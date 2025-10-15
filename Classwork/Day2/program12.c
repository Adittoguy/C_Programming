/*
    START
        Accept Number and store as No
        Divide No by two
        If the remainder is 0 
            then display as even 
        otherwise 
            display as odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even Nember\n");
    }
    else
    {
        printf("It is Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}