//8. C program to swap two numbers USING 3RD VARIABLE AND
// WITHOUT 3RD VARIABLE.

#include <stdio.h>
int main()
{
   int a, b, temp;

   printf("Enter the value of a and b\n");
   scanf("%d%d", &a, &b);

   printf("Before Swapping\na = %d\nb = %d\n",a,b);

   temp = a;
   a    = b;
   b    = temp;

   printf("After Swapping\na = %d\nb = %d\n",a,b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("After Swapping without using third variable\na = %d\nb = %d\n",a,b);

   return 0;
}
