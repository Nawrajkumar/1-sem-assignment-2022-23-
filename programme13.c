// 13. C program to check vowel or consonant using switch case.

#include <stdio.h>

int main()
{
   char ch;
   printf("Enter any character: ");
   scanf("%c", &ch);

   switch(ch)
   {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
         printf("%c is a vowel.", ch);
         break;
      default:
         printf("%c is a consonant.", ch);
   }

   return 0;
}
