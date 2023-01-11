 /* print thr given program
    if user give row =5
    1 1 1 1 1
    1 1 1 1 1
    1 1 1 1 1
    1 1 1 1 1
    1 1 1 1 1
    
    */
 #include<stdio.h>
 int main()
 {  
     int row;
     printf(" enter the row size \n");
     scanf("%d",&row);
     for(int i=1; i<=row; i++)
    {
        /* Iterate through columns */
        for(int j=1; j<=row; j++)
        {
            printf(" 1 ");
        }

        printf("\n");
    }

    return 0;	
 }
