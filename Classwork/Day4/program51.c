// used to count number os factors
#include <stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iFrequncy = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFrequncy++;
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

    iRet = CountFactors(iValue);

    printf("Number of Factors are : %d\n", iRet);

    return 0;
}