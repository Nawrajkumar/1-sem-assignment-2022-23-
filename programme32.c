//  32. C program to copy one array to another array.

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr1[n], arr2[n];

    for(i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    
    for (i = 0; i < n; i++) 
    {
        arr2[i] = arr1[i];
    }


    printf("Elements of new array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d, ", arr2[i]);
    }

    return 0;
}
