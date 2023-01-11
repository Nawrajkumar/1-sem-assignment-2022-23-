// 33. C program to insert an element in array at specified position

#include <stdio.h>

int main()
{
    int arr[100], pos, i, num, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the location where you wish to insert an element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &num);
    //Make space for new element
    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;
    printf("Resultant array is: \n");
    for(i=0; i<=n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
