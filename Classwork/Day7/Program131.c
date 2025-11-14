#include <stdio.h>
#include <stdlib.h>

int Average(int Arr[], int iSize)
{
    printf("Values are: \n");
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
            iSum += Arr[iCnt];
    }
    return (iSum/iSize);        // Issue
}

int main()
{
    int iLenght = 0, iCnt = 0; 
    float fRet = 0;
    int * ptr = NULL;

    printf("Enter number of Elements: ");
    scanf("%d", &iLenght);

    ptr = (int *) malloc (iLenght * sizeof(int));
    if(NULL == ptr)                                  
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    fRet = Average(ptr, iLenght);

    printf("Number of odd elements is : %0.2f\n",fRet);

    free(ptr);

    return 0;
}