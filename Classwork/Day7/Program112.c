#include <stdio.h>

void Display(int * Ptr)                     // issue didnt give required output
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", *Ptr);
    }
}

int main()
{
    int Arr[] = {10, 20, 30 ,40};

    Display(Arr);       // Display(100);

    return 0;
}