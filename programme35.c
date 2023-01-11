//35. C program to search element in array using Linear Search.

#include<stdio.h>
int main()
{
	int arr[50],i,n,x,flag=0;
	
	//Taking input
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Taking input from user
	printf("Enter the element to be searched : ");
	scanf("%d",&x);
	
	//Searching element 
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			flag=1;
			break;
		}
	}
	
	//Printing result
	if(flag==1)
		printf("Element found at position %d",i+1);
	else
		printf("Element not found");
		
	return 0;
}
