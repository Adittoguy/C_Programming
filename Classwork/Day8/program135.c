#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLenght = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLenght);

    // Step 1 - Allocate the memory
    iPtr = (IPTR) malloc (iLenght * sizeof(int));
    
    if(NULL == iPtr)
    {
        printf("Memmory not allocated");
        return -1;
    }

    printf("Enter the values: ");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 - Use the Memory
    iRet = FrequencyCalculate(iPtr, iLenght);  
    
    printf("Frequency of 11 is : %d", iRet);

    // Step 3 - Free the memory
    free(iPtr);

    return 0;
}