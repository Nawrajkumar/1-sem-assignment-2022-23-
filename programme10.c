// 10. C program to check alphabet, digit or special character using
// Conditional operator.

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
 
    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("Alphabet") :
    (c >= '0' && c <= '9') ? printf("Digit") :printf("Special character");
 
    return 0;
}
