#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RectangleArea
//  Description     :   Used to Display Area if Rectangle
//  Input           :   Float
//  Output          :   Double
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/10/2025
//
////////////////////////////////////////////////////////////////////////

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
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
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dREt = 0.0;

    printf("Enter Width: ");
    scanf("%f", &fValue1);

    printf("Enter Width: ");
    scanf("%f", &fValue2);

    dREt = RectangleArea(fValue1, fValue2);

    printf("Area of Rectangle is : %0.4f", dREt);

    return 0;
}