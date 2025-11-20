////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Used to accept N number and find even numbers from them
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   15/11/2025
//
////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
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

    printf("Enter number of elements: \n");
    scanf("%d", &iLength);

    iptr = (int *) malloc (iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    iRet = CountEven(iptr, iLength);

    printf("Result is : %d", iRet);

    free(iptr);

    return 0;
}// End of main