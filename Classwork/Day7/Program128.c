#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)
{
    printf("Values are: \n");
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLenght = 0, iCnt = 0, iRet = 0;
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

    iRet = Summation(ptr, iLenght);

    printf("Summation is : %d",iRet);

    free(ptr);

    return 0;
}