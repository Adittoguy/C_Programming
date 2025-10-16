#include <stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            break;                              // Optimization due to break
        }
    }

    if(iCnt > (iNo/2))                          // No factors   time complexity O(N/2)
    {
        return true;
    }
    else                                        // Atleast one factor   time complexity O(1) or O(2)
    {
        return false;
    }
}

//

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else
    {
        printf("%d is not a prime number\n", iValue);
    }

    return 0;
}

/*
    Time Complexity for prime : O(N/2)
    Time Complexity for Non prime : either O(1) or O(2)

*/