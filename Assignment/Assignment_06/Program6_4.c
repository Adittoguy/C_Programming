#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Description     :   Used to multiply 3 number taken from user
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   23/10/2025
//
////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 1;
    int iCount = 0;

    if(iNo1 != 0)
    {
        iResult = iResult * iNo1;
        iCount++;
    }

    if(iNo2 != 0)
    {
        iResult = iResult * iNo2;
        iCount++;
    }

    if(iNo3 != 0)
    {
        iResult = iResult * iNo3;
        iCount++;
    }

    if(iCount == 0)
    {
        return 0;
    }

    return iResult;
}

// Time Complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n",iRet);

    return 0;
}