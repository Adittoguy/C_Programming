#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Used to accept N number and find NO is present or not
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   16/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            bFlag = TRUE;
        }
    }
    return bFlag;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int  *iptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the number which you want to check: ");
    scanf("%d", &iValue);

    iptr = (int *) malloc (iLength * sizeof(int));
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

    bRet = Check(iptr, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present in data", iValue);
    }
    else
    {   
        printf("%d is not present in data", iValue);
    }

    free(iptr);

    return 0;
}