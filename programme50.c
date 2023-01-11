// 50. C program to copy an array to another array AND reverse an
// array using pointers.


#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], rev[MAX_SIZE];
    int i, size;
    int *p1, *p2;

    /* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* 
     * Copy array using pointers 
     */
    p1 = arr;
    p2 = rev;

    /* 
     * Copy all elements 
     */
    for(i=0; i<size; i++)
    {
        *p2 = *p1;
        p1++;
        p2++;
    }

    /* 
     * Print reversed array 
     */
    printf("Reversed array: ");
    for(i=size-1; i>=0; i--)
    {
        printf("%d ", rev[i]);
    }

    return 0;
}
