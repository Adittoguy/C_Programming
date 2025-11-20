////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Used to accept N number and find iNo's number of count in data
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/11/2025
//
////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *iptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    iptr = (int *) malloc (iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter tht elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    printf("Enter the number which you want to check: ");
    scanf("%d", &iValue);

    iRet = Frequency(iptr, iLength, iValue);

    printf("%d occured %d times in data", iValue, iRet);

    free(iptr);

    return 0;
}// End of main

