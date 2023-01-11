// 36. C program to find second largest number and Sorting Using
// Bubble sort in an array.


#include<stdio.h>
int main()
{
	int a[100],i,n,j,temp;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The second largest number in the array is : %d\n",a[n-2]);
	printf("The sorted array is : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
