/*
Accept number of rows and collumns from user and display below pattern

Input:   iRows = 4 iCol = 4

Output:
        1       2       3       4 
                2       3       4
                        3       4
                                4
        
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0,j = 0;
  int iNum = 0;
  for(i = 1;i <= iRow; i++)
  {
    for(j = 1,iNum = 1 ; j <= iCol;j++,iNum++)
    {
       if(j>=i)
       {
        printf("%d \t",iNum);   
       }
        else{
         printf(" \t");
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
4
1       2       3       4 
        2       3       4
                3       4
                        4

*/