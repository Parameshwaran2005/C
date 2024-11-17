#include<stdio.h>

int main(){


    FILE *ptr;
    // ptr = fopen("sample1.txt","r");
    ptr = fopen("sample2.txt","w");
    fclose(ptr);
     return 0;

}