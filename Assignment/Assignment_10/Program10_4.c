#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FhToCs
//  Description     :   Used to Convert temperature from fahernheit to celsius
//  Input           :   Float
//  Output          :   Double
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   28/10/2025
//
////////////////////////////////////////////////////////////////////////

double FhToCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0/9.0);
    return dCelsius;
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

    printf("Enter temperatur in fahernheit : ");
    scanf("%f", &fValue);

    dREt = FhToCs(fValue);

    printf("Conversion is : %0.4lf C", dREt);

    return 0;
}