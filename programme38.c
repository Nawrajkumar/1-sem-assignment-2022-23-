// 38. C program to perform scalar matrix multiplication.

#include <stdio.h> 
 
int main() 
{ 
    int a[10][10], b[10][10], m, n, c, d, k, sum = 0; 
  
    printf("Enter the number of rows and columns of matrix\n"); 
    scanf("%d%d", &m, &n); 
    printf("Enter the elements of first matrix\n"); 
  
    for (c = 0; c < m; c++) 
        for (d = 0; d < n; d++) 
            scanf("%d", &a[c][d]); 
  
    printf("Enter the elements of second matrix\n"); 
  
    for (c = 0; c < m; c++) 
        for (d = 0 ; d < n; d++) 
            scanf("%d", &b[c][d]); 
  
    printf("Enter the scalar\n"); 
    scanf("%d", &k); 
  
    for (c = 0; c < m; c++) 
        for (d = 0; d < n; d++) 
            a[c][d] *= k; 
  
    printf("Product of entered matrices:-\n"); 
  
    for (c = 0; c < m; c++) { 
        for (d = 0; d < n; d++) 
            printf("%d\t", a[c][d]); 
  
        printf("\n"); 
    } 
  
    return 0; 
}
