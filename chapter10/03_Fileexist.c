#include<stdio.h>

int main(){


    FILE *ptr;
    int num1,num2;
    ptr = fopen("02_read.txt","r");
    if (ptr == NULL)
    {
        printf("This file does not exist");
    }
    else
    {
    
    fscanf(ptr , "%d",&num1);
    fscanf(ptr , "%d",&num2);
    fclose(ptr);
    printf("The value of num1 is %d \n", num1);
    printf("The value of num2 is %d \n", num2);
    }
     return 0;

}