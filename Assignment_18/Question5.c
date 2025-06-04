/*

Accept N number from user and display all such elememts which are multiple of 11.

inputs:  N : 6
         Elements: 85 15 3 80 93 88

Output:  88

*/

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 11) == 0 )
        {
            printf("%d \n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Enable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    Display(p, iSize);
free(p);
    return 0;
}

/*

Enter number of elements : 4
Enter 4 elements 
Enter 2 element : 2
Enter 3 element : 5
Enter 4 element : 77
77

*/