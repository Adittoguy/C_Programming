#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    printf("Values are: \n");
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int iLenght = 0, iCnt = 0;
    int * ptr = NULL;

    printf("Enter number of Elements: ");
    scanf("%d", &iLenght);

    ptr = (int *) malloc (iLenght * sizeof(int));
    if(NULL = ptr)                                  // Error becoz NULL = ptr is not possible
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLenght);

    free(ptr);

    return 0;
}