//   2   3   4   5  .....

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

// Time complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please enter freqency: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}