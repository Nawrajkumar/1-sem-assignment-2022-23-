//39. C program to find sum of main diagonal elements of a matrix.

#include <stdio.h>

int main()
{
    int matrix[10][10], i, j, m, n, sum = 0;

    printf("Enter the order of the matrix :\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix :\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for(i = 0; i < m; i++)
        sum += matrix[i][i];

    printf("Sum of main diagonal elements : %d", sum);

    return 0;
}
