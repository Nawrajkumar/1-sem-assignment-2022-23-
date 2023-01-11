// 21. C program to count frequency of digits in a given number

#include <stdio.h>

int main(){
    
    int num, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to be counted: ");
    scanf("%d", &digit);
    while(num > 0){
        if(num % 10 == digit){
            count++;
        }
        num /= 10;
    }
    printf("Frequency of %d in the given number is %d", digit, count);
    return 0;
}
