//40. C program to check sparse AND transpose matrix

#include<stdio.h>

int main() 
{
	int a[10][10], transpose[10][10], sparse[10][3];
	int r, c, i, j, k = 0;
	
	printf("Enter the number of rows and columns of matrix: \n");
	scanf("%d %d", &r, &c);
	
	printf("\nEnter the elements of the matrix: \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	//Check for sparse matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (a[i][j] == 0) {
				sparse[k][0] = i;
				sparse[k][1] = j;
				sparse[k][2] = a[i][j];
				k++;
			}
		}
	}
	
	//Check for transpose matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			transpose[j][i] = a[i][j];
		}
	}
	
	printf("\nGiven matrix is a ");
	if (k > (r * c) / 2)
		printf("sparse matrix\n");
	else
		printf("not a sparse matrix\n");
	
	printf("Transpose of the matrix is:\n");
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
