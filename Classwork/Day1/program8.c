/*
    Step 1 - Understand the problem statement
    Step 2 - write the algorithm
    step 3 - Decide the programming language
    Step 4 - write the program
    Step 5 - Test the program
*/

/*
    Alogithm
    START
        Accept First number as No1
        Accept secnd number as No2
        Perform Addition of No1 and No2
        Display the Addition on Console
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;                    //Business logic
    return fSum;
}

int main()
{  
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number: \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);
    
    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition of Two Numbers is : %0.2f \n", fRet);

    return 0;
}