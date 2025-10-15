#include<stdio.h>

// Dynamic Function

void Display(int iFreq)
{
    int iCnt = 0;
    
    //Filter
    if (iFreq < 0)
    {
        printf("Invalid input");
        return;
    }
    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the Frequency: \n");
    scanf("%d",&iCount);
    
    Display(iCount);

    return 0;
}
