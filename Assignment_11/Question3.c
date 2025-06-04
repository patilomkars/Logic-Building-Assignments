/*
Accept number from user and display below pattern

Input : 5
Output : 1 * 2 * 3 * 4 * 5 *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for( i = 1; i <= iNo; i++ )
    {
        printf("%d\t*\t",i);
    }

    /*printf("\n");

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    } */

}
int main()
{
    int iVal = 0;

    printf("Enter the number : \n");
    scanf("%d",&iVal);

    Pattern(iVal);


    return 0;
}

/*

Enter the number : 
5
1       *       2       *       3       *       4       *       5       *

*/