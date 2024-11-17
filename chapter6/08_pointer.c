#include<stdio.h>

int main(){


     int a = 3;
     int *ptr=&a;
     int **ptr_ptr=&ptr;

     printf("The value of a is %d \n", **ptr_ptr);
    //  printf("The address of a is %u \n ", ptr);
     return 0;

}