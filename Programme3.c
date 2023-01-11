// 3. C program to find all angles of a triangle if two angles are given.
#include<stdio.h>
void main()
{
 int a,b,c,angle;
 printf("Enter the first angle of a triangle:-");
 scanf("%d",&a);
 printf("Enter the second angle of a triangle:-");
 scanf("%d",&b);
 c=a+b;
 angle=180-c;
 printf("The Third Angle= %d",angle);
 }
