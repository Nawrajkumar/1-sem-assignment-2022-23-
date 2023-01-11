// 41. C program to check whether a matrix is Identity matrix or not

#include <stdio.h>

#define SIZE 3

int main()
{
    int a[SIZE][SIZE];
    int i, j, flag = 1;

    printf("Enter elements in matrix of size 3x3: \n");
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(i == j && a[i][j] != 1)
            {
                flag = 0;
            }
            else if(i != j && a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("\nThe matrix is an identity matrix\n");
    }
    else
    {
        printf("\nThe matrix is not an identity matrix\n");
    }

    return 0;
}
