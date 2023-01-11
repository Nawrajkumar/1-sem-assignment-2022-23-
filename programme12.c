// 12. C program to create Simple Calculator AND Days of week
// using switch case.

#include <stdio.h>
#include <conio.h>

void main()
{
	int choice;
	float sum,a,b,dif,product,q,r,p,percent;
	while(1)
	{
	printf("1. Addion\n");
	printf("2. Subtaction\n");
	printf("3. Multiply\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("\nEnter Your Choice\n");
	scanf("%d",&choice);
	if(choice>0 && choice<=5)
	{
	switch(choice)
	{
		case 1:
			printf("\nEnter first number");
			scanf("%f",&a);
			printf("Enter Second number");
			scanf("%f",&b);
			sum=a+b;
			printf("Sum = %f",sum);
			break;

		case 2:
			printf("\nEnter first number");
			scanf("%f",&a);
			printf("Enter Second number");
			scanf("%f",&b);
			dif=a-b;
			printf("Difference = %f",dif);
			break;

		case 3:
			printf("\nEnter first number");
			scanf("%f",&a);
			printf("Enter Second number");
			scanf("%f",&b);
			product=a*b;
			printf("Product = %f",product);
			break;

		case 4:
			printf("\nEnter Dividend");
			scanf("%f",&a);
			printf("Enter Divisor");
			scanf("%f",&b);
			q=a/b;
			printf("Quotient = %f",q);
			break;
		case 5:
			return;
	}
	}
	else
	{
		printf("Invalid input\n\n Please select 5 range");
	}
	getch();
	}
}
