/* print thr given pattern if user give row =5 and colum =5;
   Enter the Number of Row and Column :5
      1 1 1 1 1
      1 1 1 1 1
      1 1 1 1 1
      1 1 1 1 1
      1 1 1 1 1
   */ 
   
#include<stdio.h>
int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=1; j<=cols; j++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}
