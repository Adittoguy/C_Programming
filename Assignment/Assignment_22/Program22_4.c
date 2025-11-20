////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Used to accept N number and find 11's number of count in data
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/11/2025
//
////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    iptr = (int *) malloc (iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the Elements: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    iRet = Frequency(iptr, iLength);

    printf("11 occured %d times in array", iRet);

    free(iptr);

    return 0;
}// End of main