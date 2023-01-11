// 25. C program to print Fibonacci series up to n terms

#include <stdio.h>
int main()
{
    int i, n, a = 0, b= 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b= nextTerm;
    }
    return 0;
}
