#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR;


int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLenght = 0, iCnt = 0,iValue = 0, iRet = 0; 
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

    printf("Which number's frequency you want: ");
    scanf("%d", &iValue);

    // Step 2 - Use the Memory
    iRet = FrequencyCalculate(iPtr, iLenght, iValue);  
    
    printf("%d is present %d times in data",iValue, iRet);

    // Step 3 - Free the memory
    free(iPtr);

    return 0;
}