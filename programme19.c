// 19. C program to calculate factorial of a number.

#include<stdio.h>
void main ()
{
	int a,fact=1;
	printf("Enter number\n");
	scanf("%d",&a);
	while(a>1)
	{
		fact=fact*a;
		a--;
	}
	printf("Factorial = %d ",fact);
}
