// 7. C program to check Least Significant Bit (LSB) and MSB of a
// number using bitwise operator.

#include <stdio.h> 
int main() 
{ 
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); 
    
    int lsb = num & 1; 
    printf("Least Significant Bit (LSB) of %d is %d \n", num, lsb); 
  

    int msb = num >> (sizeof(int) * 8 - 1); 
    printf("Most Significant Bit (MSB) of %d is %d \n", num, msb); 
  
    return 0; 
}
