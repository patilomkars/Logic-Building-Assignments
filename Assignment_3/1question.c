//1.Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}
