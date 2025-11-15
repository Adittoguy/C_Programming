#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLenght = 0, iCnt = 0;
    int * iPtr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLenght);

    // Step 1 - Allocate the memory
    iPtr = (int *) malloc (iLenght * sizeof(int));
    
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
    // Call the function which contains business logic
    // Fun(iPtr, iLength);

    // Step 3 - Free the memory
    free(iPtr);

    return 0;
}