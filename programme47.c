// 47. C program to check prime, armstrong and perfect numbers
// using functions.

#include <stdio.h>

int checkPrime(int n) 
{ 
    int i; 
    for(i=2; i<=n/2; ++i) 
    { 
        if(n%i==0) 
            return 0; 
    } 
    return 1; 
} 

int checkArmstrong(int num) 
{ 
    int originalNum, remainder, result = 0; 
    originalNum = num; 
  
    while (originalNum != 0) 
    { 
        remainder = originalNum % 10; 
        result += remainder * remainder * remainder; 
        originalNum /= 10; 
    } 
  
    if (result == num) 
        return 1; 
    else
        return 0; 
} 

int checkPerfect(int num) 
{ 
    int i, sum = 0; 
  
    for (i = 1; i <= num / 2; i++) { 
        if (num % i == 0) 
            sum += i; 
    } 
  
    if (sum == num) 
        return 1; 
    else
        return 0; 
} 
  
int main() 
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkPrime(n)) 
        printf("%d is a prime number\n", n); 
    else
        printf("%d is not a prime number\n", n); 
  
    if (checkArmstrong(n)) 
        printf("%d is an Armstrong number\n", n); 
    else
        printf("%d is not an Armstrong number\n", n); 
  
    if (checkPerfect(n)) 
        printf("%d is a perfect number\n", n); 
    else
        printf("%d is not a perfect number\n", n); 
  
    return 0; 
}
