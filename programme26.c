// 26. C program to print Armstrong numbers from 1 to n AND
// Check a given number is Armstrong numbers or not

#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum%10;
        result += remainder*remainder*remainder;
        originalNum /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
