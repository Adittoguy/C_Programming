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
    int iNum = 1;
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", iNum);
            if(iNum == 9)
            {
                iNum = 1;
            }
            else
            {
                iNum++;
            }
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
//  Input   :   iRow : 4    iCol : 4
// 
//  Output  :   1       2       3       4 
//              5       6       7       8
//              9       1       2       3
//              4       5       6       7
//
////////////////////////////////////////////////////////////////////////