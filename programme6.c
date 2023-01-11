// 6. C program to calculate total, average and percentage and grades of
// five subjects.

#include<stdio.h>
void main()
{
float a,b,c,d,e,total,avg,p,percent;
printf("Maths:-");
scanf("%f",&a);
printf("Science:-");
scanf("%f",&b);
printf("Hindi:-");
scanf("%f",&c);
printf("English:-");
scanf("%f",&d);
printf("Social Science:-");
scanf("%f",&e);
total=a+b+c+d+e;
printf("Total=%.2f\n",total);
avg=total/5;
printf("Average=%.2f\n",avg);
p=total/500;
percent=p*100;
printf("Percentage=%.2f%\n",percent);
if (percent<=100 && percent>=90)
{
printf("Grade A");
}
else if (percent>=80 && percent<90)
{
printf("Grade B");
}
else if (percent>=70  && percent<80)
{
printf("Grade C");
}
else if (percent>=70  && percent<40)
{
printf("Grade D");
}
else
{
printf("Fail");
}
}


