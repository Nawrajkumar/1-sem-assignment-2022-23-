/* 
Enter the Number of Row and Column :5
12345
12345
12345
12345
12345 */

#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter the Number of Row and Column :");
    scanf("%d",&n);     
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d",j);
        }
        printf("\n");
    }

}
