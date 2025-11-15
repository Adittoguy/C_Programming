#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR;

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    
    return bFlag; 
}

int main()
{
    int iLenght = 0, iCnt = 0,iValue = 0; 
    bool bRet = 0;
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

    printf("Which number you want to search: ");
    scanf("%d", &iValue);

    // Step 2 - Use the Memory
    bRet = LinearSearch(iPtr, iLenght, iValue);  
    
    if(bRet == true)
    {
        printf("%d is present",iValue, bRet);
    }
    else
    {
        printf("%d is not present",iValue, bRet);
    }

    // Step 3 - Free the memory
    free(iPtr);

    return 0;
}