/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 5 iCol = 4

Output:
        a       b       c       d 
        1       2       3       4
        a       b       c       d
        1       2       3       4 
        a       b       c       d

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 1, iNum = 1; j <= iCol; j++, iNum++)
            {
                printf(" %d \t", iNum);
            }
        }
        if ((i % 2) != 0)
        {
            for (j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf(" %c \t", ch);
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

Enter number of rows and columns :  5
4
 a       b       c       d 
 1       2       3       4
 a       b       c       d
 1       2       3       4
 a       b       c       d

*/