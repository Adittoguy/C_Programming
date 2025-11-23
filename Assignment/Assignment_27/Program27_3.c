////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Used to print Pattern
//  Input           :   Integer, Integer
//  Output          :   Pattern
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   21/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}// End of Main

////////////////////////////////////////////////////////////////////////
//
//  Test case handled by application
//
//  Input   :   iRow : 3    iCol : 5
// 
//  Output  :   5   4   3   2   1    
//              5   4   3   2   1   
//              5   4   3   2   1   
//              5   4   3   2   1   
//
////////////////////////////////////////////////////////////////////////