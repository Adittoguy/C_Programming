// used to count number os factors
#include <stdio.h>

int CountNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequncy = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequncy++;
            // printf("%d\n", iCnt);
        }
    }

    return iFrequncy;
}

//

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = CountNonFactors(iValue);

    printf("Number of non Factors are : %d\n", iRet);

    return 0;
}