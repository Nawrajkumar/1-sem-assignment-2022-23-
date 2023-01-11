// All Operations of String.

#include<stdio.h>
#include<string.h>
void main(){
    char str[20], oStr[20], cat[20];

    printf("ENter the string to perform operations : ");
    fgets(str,20,stdin);

    strcpy(oStr,str);

    printf("\nThe origianl string is : %s",oStr);

    printf("\nThe reversed string is : %s",strrev(str));

    strcpy(str,oStr);

    printf("\nThe string in upper case is : %s",strupr(str));

    strcpy(str,oStr);

    printf("\nThe string in lower case is : %s",strlwr(str));

    strcpy(str,oStr);

    printf("\nThe concatinated string with same string : %s",strcat(str,oStr));

    strcpy(str,oStr);

    printf("\nThe value after comparing it : %d",strcmp(str,oStr));    
}
