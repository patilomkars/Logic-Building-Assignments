
/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 4 iCol = 5

Output:
        2       4       6       8       10
        1       3       5       7       9
        2       4       6       8       10
        1       3       5       7       9
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 1, iNum = 1; j <= iCol; j++, iNum = iNum + 2)
            {
                printf(" %d \t", iNum);
            }
        }
        if ((i % 2) != 0)
        {
            for (j = 1, iNum = 2; j <= iCol; j++, iNum = iNum + 2)
            {
                printf(" %d \t", iNum);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns :  ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*

Enter number of rows and columns :  4
5
 2       4       6       8       10
 1       3       5       7       9
 2       4       6       8       10
 1       3       5       7       9

*/