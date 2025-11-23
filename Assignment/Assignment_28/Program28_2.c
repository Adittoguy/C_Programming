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
//  Output          :   Character
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   21/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    char cCh = 'A';
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            cCh = 'A';
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%c\t", cCh);
                cCh++;
            }
            printf("\n");
        }
        else
        {
            cCh = 'a';
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%c\t", cCh);
                cCh++;
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
//  Input   :   iRow : 4    iCol : 4
// 
//  Output  :   A   B   C   D
//              a   b   c   d
//              A   B   C   D
//              a   b   c   d
//
////////////////////////////////////////////////////////////////////////