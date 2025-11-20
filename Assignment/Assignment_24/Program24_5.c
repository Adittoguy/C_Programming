////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DigitsSum
//  Description     :   Used to accept N number and and returning sum of each number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0, iTemp = 0;
    int iSum = 0, iDigit = 0;

    if(iTemp < 0)
    {
        iTemp = -iTemp;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iTemp = Arr[iCnt];
        iCount = 0;
        iSum = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum += iDigit;
            iTemp = iTemp / 10;
        }

        printf("%d\t", iSum);
    }
}// End of Function

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

    DigitsSum(iptr, iLength);

    free(iptr);

    return 0;
}// End of Main