////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Used to Print Pattern
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   21/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t", jCnt*2);
            }
            printf("\n");
        }
        else
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t", (2 * jCnt)-1);
            }
            printf("\n");
        }
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

    printf("Enter number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}// End of Main

////////////////////////////////////////////////////////////////////////
//
//  Test case handled by application
//
//  Input   :   iRow : 4    iCol : 5
//
//  Output  :   2       4       6       8       10
//              1       3       5       7       9
//              2       4       6       8       10
//              1       3       5       7       9
//
////////////////////////////////////////////////////////////////////////
