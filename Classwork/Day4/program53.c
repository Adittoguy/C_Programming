// used to count number os factors
#include <stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequncy1 = 0;
    int iFrequncy2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequncy1++;
        }
        else
        {
            iFrequncy2++;
        }
    }

    printf("Numbers of Factors are: %d\n",iFrequncy1);
    printf("Numbers of Non Factors are: %d\n",iFrequncy2);
}

//

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}