#include<stdio.h>

int main(){


     int a = 3;
     int *ptr=&a;
     printf("The value of a is %d \n", *ptr);
     printf("The address of a is %u \n ", ptr);
     return 0;

}