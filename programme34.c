//34. C program to delete an element in array at specified position.

#include <stdio.h>

int main()
{
    int array[50], size, i, pos;
    
    // Ask user to enter array size
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    // Ask user to enter array elements
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // Ask user to enter position to delete element
    printf("Enter the position to delete element: ");
    scanf("%d", &pos);
    
    // Delete element from the array
    for(i=pos-1; i<size-1; i++)
    {
        array[i] = array[i+1];
    }
    
    // New size after deleting element
    size--;
    
    // Print updated array
    printf("\nArray elements after deletion: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
