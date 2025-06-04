/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 3 iCol = 5

Output:
        A       A       A       A       A 
        B       B       B       B       B
        C       C       C       C       C
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char chr = '\0';

    for (i = 1, chr = 'A'; i <= iRow; i++, chr++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf(" %c \t", chr);
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
5
 A       A       A       A       A 
 B       B       B       B       B
 C       C       C       C       C

*/