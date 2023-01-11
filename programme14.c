// 14. C program to check positive negative or zero using switch
// case.

#include <stdio.h>
 
int main()
{
    int num;
 
    printf("Enter any number: ");
    scanf("%d", &num);
 
    switch(num >= 0)
    {
        case 1: 
            printf("%d is a positive number ", num);
            break;
        case 0:
            printf("%d is a negative number ", num);
            break;
        default:
            printf("%d is 0 ", num);
            break;
    }
 
    return 0;
}
