// 37. C program to count total number of duplicate elements in an
// array

#include <stdio.h> 
  
int countDuplicates(int arr[], int n) 
{ 
    // First take an empty map 
    int map[1000] = { 0 }; 
  
    int dup = 0; 
  
    // insert all elements of array in the map 
    for (int i = 0; i < n; i++) 
        map[arr[i]]++; 
  
    // Iterate in the map and count duplicates 
    for (int i = 0; i < 1000; i++) 
        if (map[i] > 1) 
            dup += map[i] - 1; 
  
    return dup; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 }; 
    int n = sizeof(arr) / sizeof(int); 
  
    printf("Total number of duplicate elements is %d", 
            countDuplicates(arr, n)); 
    return 0; 
}
