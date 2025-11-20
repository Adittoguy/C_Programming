////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Maximum
//  Description     :   Used to accept N number and find maximum number among them
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum (iptr, iLength);

    printf("Maximum value is %d",iRet);

    free(iptr);

    return 0;
}// End of Main