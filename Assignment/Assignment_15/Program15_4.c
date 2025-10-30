#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultDigits
//  Description     :   Used to accept number and display the multiplication of those digits
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   30/10/2025
//
////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // while(iNo != 0)
    // {
    //     iDigit = iNo % 10;
    //     if(iDigit == 0)
    //     {
    //         iDigit = 1;
    //     }
    //     iMulti = iMulti * iDigit;

    //     iNo = iNo / 10;
    // }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iMulti = iMulti * ((iDigit == 0) ? 1 : iDigit);
        iNo = iNo / 10;
    }
    return iMulti;
}

// iMulti = iMulti * (iDigit == 0) ? 1 : iDigit;        Wrong
// iMulti = iMulti * ((iDigit == 0) ? 1 : iDigit);      Correct
// iMulti *= (iDigit == 0) ? 1 : iDigit;                Correct

// Time complexity :- O(log n)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}