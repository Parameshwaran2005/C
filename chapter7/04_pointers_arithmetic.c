#include <stdio.h>

int main()
{

    int a=3;
    int *ptr=&a;
    printf("the pointer address is %u \n", ptr);
    ptr++;
    printf("the pointer address is %u \n", ptr);
    printf("the pointer address is %u \n", ptr - &a);
    printf("the pointer address is %u \n", &a);
    

    // char c = 'a';
    // char *all = &c;
    // printf("the pointer address is %u \n", all);
    // all++;
    // printf("the pointer address is %u \n", all);
    // printf("the pointer address is %u \n", &c);
    
    // float c = 3.4;
    // float *all = &c;
    // printf("the pointer address is %u \n", all);
    // all++;
    // printf("the pointer address is %u \n", all);
    // printf("the pointer address is %u \n", &c);

    return 0;
}