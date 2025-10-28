#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CircleArea
//  Description     :   Used to Display Area if Circle
//  Input           :   Float
//  Output          :   Double
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/10/2025
//
////////////////////////////////////////////////////////////////////////

double CircleArea(float Radius)
{
    float PI = 3.14f;

    double dArea = 0.0;
    dArea = PI * Radius * Radius;
    return dArea;
}

// Time complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dREt = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dREt = CircleArea(fValue);

    printf("Area of Circle is: %0.4f", dREt);

    return 0;
}