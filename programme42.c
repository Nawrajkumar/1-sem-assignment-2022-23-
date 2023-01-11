// 42. C program to merge two sorted array in ascending order.

#include <stdio.h>

int main()
{
    int a[50], b[50], c[100], i, j, k, size1, size2;

    // Input size of array a
    printf("Enter size of array A: ");
    scanf("%d", &size1);

    // Input array a
    printf("Enter elements in array A: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input size of array b
    printf("Enter size of array B: ");
    scanf("%d", &size2);

    // Input array b
    printf("Enter elements in array B: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge array a and b in ascending order
    while(i<size1 && j<size2)
    {
        // Check if current element of a is smaller
        // than current element of b
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    // If array a has more elements than array b
    while(i < size1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // If array b has more elements than array a
    while(j < size2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Print merged array
    printf("\nMerged array: ");
    for(i=0; i<(size1+size2); i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
