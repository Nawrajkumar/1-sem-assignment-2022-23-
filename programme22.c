// 22. C program to find HCF(GCD) AND LCM of two numbers.

#include<stdio.h>
int main()
{
    int n1, n2, gcd, x, y, lcm;
    printf("Enter two numbers:");
    scanf("%d%d", &n1, &n2);
    x=n1, y=n2;
    while(n2!=0)
    {
        gcd=n1%n2;
        n1=n2;
        n2=gcd;
    }
    printf("HCF of %d and %d is %d\n", x, y, n1);
    lcm=(x*y)/n1;
    printf("LCM of %d and %d is %d\n", x, y, lcm);
    return 0;
}
