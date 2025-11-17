#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Digits
//  Description     :   Used to accept N number and find numbers having 3 digits in it
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0, iTemp = 0;

    if(iTemp < 0)
    {
        iTemp = -iTemp;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iTemp = Arr[iCnt];
        iCount = 0;

        while(iTemp != 0)
        {
            iCount++;
            iTemp = iTemp / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t", Arr[iCnt]);    
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    iptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    Digits(iptr, iLength);

    free(iptr);

    return 0;
}