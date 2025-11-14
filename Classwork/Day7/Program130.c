#include <stdio.h>
#include <stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    printf("Values are: \n");
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] %2)==1)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountOdd(ptr, iLenght);

    printf("Number of odd elements is : %d\n",iRet);

    free(ptr);

    return 0;
}