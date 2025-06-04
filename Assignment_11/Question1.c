/*
Accept number from user and display below pattern

 input: 5
 Ouput: A B C D E

*/
#include <stdio.h>

void Pattern(int iNo)
{
    char Ch = '\0';
    int i = 0;
    for (i = 1,Ch = 'A'; i <= iNo; i++ ,Ch++)
    {

        printf("%c \t", Ch);
        
    }
}

int main()
{
    int iVal = 0;

    printf("Enter number : ");
    scanf("%d", &iVal);

    Pattern(iVal);

    return 0;
}

/*
Enter number : 
5
A       B       C       D       E 
*/
