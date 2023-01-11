//   31. C program to find sum of all elements of array.

#include <stdio.h>
 
int main()
{
    int array[100], sum=0, i, size;
 
    printf("Enter number of elements in the array\n");
    scanf("%d", &size);
 
    printf("Enter %d elements\n", size);
 
    for (i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
 
    printf("Sum of all the elements of the array = %d\n", sum);
 
    return 0;
}
