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
                printf("%d\t", jCnt);
            }
            printf("\n");
        }
        else
        {
            for(jCnt = -1; jCnt >= -iCol; jCnt--)
            {
                printf("%d\t", jCnt);
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

    printf("Enter the number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of Column: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}// End of Main

////////////////////////////////////////////////////////////////////////
//
//  Test case handled by application
//
//  Input   :   iRow : 5    iCol : 5
// 
//  Output  :   1       2       3       4       5
//             -1      -2      -3      -4      -5
//              1       2       3       4       5
//             -1      -2      -3      -4      -5
//              1       2       3       4       5
//
////////////////////////////////////////////////////////////////////////
