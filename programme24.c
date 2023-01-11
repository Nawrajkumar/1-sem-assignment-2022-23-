// 24. C program to print all Strong Numbers between 1 to n 

#include<stdio.h>

int main(){
    int n,num,rem,sum=0,fact;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Strong numbers between 1 to %d are: \n",n);
    for(num=1;num<=n;num++){
        int totalnum = num;
        while(totalnum > 0){
            rem = totalnum%10;
            fact=1;
            int i;
            for(i=1;i<=rem;i++)
                fact *= i;
            sum += fact;
            totalnum /= 10;
        }
        if(sum == num)
            printf("%d ",num);
        sum = 0;
    }
    return 0;
}
