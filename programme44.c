// 44. C program to check whether a string is palindrome or not
// without Compare Function of String

#include <stdio.h>
#include <string.h>
 
int main()
{
   char a[100], b[100];
 
   printf("Enter the string to check if it is a palindrome\n");
   gets(a);
 
   strcpy(b, a);  // Copying input string
   strrev(b);  // Reversing the string
 
   if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
      printf("The string is a palindrome.\n");
   else
      printf("The string isn't a palindrome.\n");
 
   return 0;
}
