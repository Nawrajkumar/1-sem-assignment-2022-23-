// 9. C program to find maximum between three numbers using
// conditional operator AND Ternary Operator.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int max = (a > b) ? ( (a > c) ? a : c) : ( (b > c) ? b : c);

    printf("Maximum between three numbers = %d", max);

    return 0;
}
