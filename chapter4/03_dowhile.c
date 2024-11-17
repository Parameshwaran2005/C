#include<stdio.h>

int main(){


     int n,i=0;
    printf("Enter the natural number ");
    scanf("%d", &n);

     do
     {
        printf("The value of natural number is %d\n ", ++i);
        //i++;

     } while (i<n);
     
     return 0;

}