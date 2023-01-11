// 45. C program to count frequency of each character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    printf("Frequency of each character in the given string: \n");
    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c --> %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
