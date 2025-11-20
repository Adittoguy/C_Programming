////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastOcc
//  Description     :   Used to accept N numbers and No and display No's index number occured last time 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iStore = -1;

    for(iCnt = iSize; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt]== iNo)
        {
            iStore = iCnt;
            break;
        }
    }
    return iStore;
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iValue;
    int *iptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iptr = (int *) malloc(iLength * sizeof(int));
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
    
    iRet = LastOcc(iptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number at %d",iRet);
    }

    free(iptr);

    return 0;
}// End of Main