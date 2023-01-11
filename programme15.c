// 15. C program to check whether a triangle is Equilateral, Isosceles
// or Scalene.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("The triangle is Equilateral");
    }
    else if(a==b || a==c || b==c){
        printf("The triangle is Isosceles");
    }
    else{
        printf("The triangle is Scalene");
    }
    return 0;
}
