//  1    2   3   4   5

#include <stdio.h>

void Display()
    {
        printf("1\t");
        printf("2\t");
        printf("3\t");      // ("1\t2\t3\t4\t5\t")
        printf("4\t");
        printf("5\t");

        printf("\n");
    }

int main()
{
    Display();

    return 0;
}