#include<stdio.h>

int main(){


    FILE *ptr;
    int num1, num2;
    ptr = fopen("double.txt","r");
    fscanf(ptr , "%d",&num1);
    fscanf(ptr , "%d",&num2);

    ptr = fopen("double.txt","w");
    fprintf(ptr,"%d %d",num1*2,num2*2);
     return 0;

}