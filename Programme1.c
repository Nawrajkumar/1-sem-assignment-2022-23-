//1. C program to perform all arithmetic operations

#include <stdio.h> 
int main() 
{ 
    int a, b, c; 
  
     
    printf("Enter two numbers: \n"); 
    scanf("%d%d", &a, &b); 
  
    
    c = a + b; 
    printf("Sum = %d\n", c); 
  
    
    c = a - b; 
    printf("Difference = %d\n", c); 
  
    
    c = a * b; 
    printf("Product = %d\n", c); 
  
     
    c = a / b; 
    printf("Quotient = %d\n", c); 
  
    
    c = a % b; 
    printf("Remainder = %d\n", c); 
  
    return 0; 
}
