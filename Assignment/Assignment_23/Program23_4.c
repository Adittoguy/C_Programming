#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Range
//  Description     :   Used to accept N numbers and a range and display the numbers int that range from data
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
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
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the Start number: ");
    scanf("%d", &iValue1);

    printf("Enter the End number: ");
    scanf("%d", &iValue2);

    iptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    Range(iptr, iLength, iValue1, iValue2);

    free(iptr);

    return 0;
}