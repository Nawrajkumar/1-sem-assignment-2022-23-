// 49. Swap 2 numbers using Call by Value AND Call by reference.

#include<stdio.h>
int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("%d %d",a,b);

}

int swapr(int *a, int *b){
    int temp;
    
    temp = *a;

    *a = *b;

    *b = temp;

     printf("%d %d",*a,*b);
}


void main(){
    int x,y;
    printf("Enter the values to swap (call by value): ");
    scanf("%d %d",&x,&y);

    swap(x,y);

    printf("\nEnter the values to swap (call by reference) : ");
    scanf("%d %d",&x,&y);

    swapr(&x,&y);
}


