#include<stdio.h>

int main(){


    FILE *ptr;
    int num=23;
    ptr = fopen("generated.txt","w");
    fprintf(ptr,"The value is %d \n",num);
    fprintf(ptr,"Thanks \n",num);
    fclose(ptr);
    // printf("The value of num1 is %d \n", num1);
    // printf("The value of num2 is %d \n", num2);
     return 0;

}