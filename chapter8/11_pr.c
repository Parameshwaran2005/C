#include<stdio.h>
#include<string.h>

int main(){


    char str1[11];
    char str2[11]; 
    // strcat(str1,str2);
    printf("Enter value of string 1 ");
    scanf("%s",&str1);
    int a=strlen(str1);
    printf("length of string is %d \n",a);
    fflush(stdin);
    printf("Enter value of string 2 ");
    scanf("%s",&str2);
    // scanf("%c",&str2); didnt understand yet
    int b=strlen(str2);
    printf("length of string is %d \n",b);
    int val = strcmp(str1,str2);
    printf("value is %d",val);
     return 0;

}