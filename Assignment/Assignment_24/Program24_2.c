////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Minimum
//  Description     :   Used to accept N number and find minimum number among them
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;

    for(iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iptr = (int*)malloc (iLength * sizeof(int));
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

    iRet = Minimum (iptr, iLength);

    printf("Minimum value is %d",iRet);

    free(iptr);

    return 0;
}// End of Main