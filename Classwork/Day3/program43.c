// Check weather number is divisible or not
// input 12  2     output : true
// input 12  5     output : false
#include <stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter first number: ");
    scanf("%d", &iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("it is completely divisible \n");
    }
    else
    {
        printf("It is not divisible \n");
    }

    return 0;
}