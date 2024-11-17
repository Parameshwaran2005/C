#include<stdio.h>

int main(){


    int array[10];
    int *ptr=&array[0];
    ptr=ptr+2;
    if (ptr==&array[2])
    {
        printf("These point to the same memory location ", ptr);
    }
    else
    {
        printf("These point to the not same memory location ", ptr);  
    }
    
     return 0;

}