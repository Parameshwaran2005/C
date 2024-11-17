#include<stdio.h>

int main(){


    FILE *ptr;
    ptr = fopen("05_read.txt","r");
    // char c = fgetc(ptr);
    // fgetc get character by character
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    ptr = fopen("putcdemo.txt","w");
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
     return 0;

}