
/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 3 iCol = 4

Output:
        1       2       3       4 
        5       6       7       8
        9       10      11      12
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++ ,iNum++)
        {
            printf(" %d \t", iNum);
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

Enter number of rows and columns :  3
4
 1       2       3       4 
 5       6       7       8
 9       10      11      12

*/