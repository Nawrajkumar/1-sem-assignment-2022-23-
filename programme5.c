//5. C program to find power and square root of any number

#include<stdio.h>
#include<math.h>
int main()
{
    float num,power,sqroot;

    printf("Enter a number: ");
    scanf("%f",&num);

    power=pow(num,2);
    sqroot=sqrt(num);

    printf("Power of the number is: %.2f\n",power);
    printf("Square root of the number is: %.2f",sqroot);

    return 0;
}
