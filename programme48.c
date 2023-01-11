// 48. C program to add two number using pointers.

#include <stdio.h> 

int main() 
{ 
    int num1, num2, sum; 
    
    // Declare two pointers 
    int *ptr1, *ptr2; 
  
    // Store the address of num1 and num2 
    ptr1 = &num1; 
    ptr2 = &num2; 
  
    // Get the input from the user 
    printf("Enter two numbers: "); 
    scanf("%d%d", &num1, &num2); 
  
    // Add two numbers using pointer 
    sum = *ptr1 + *ptr2; 
  
    // Print the result 
    printf("Sum = %d", sum); 
  
    return 0; 
}
