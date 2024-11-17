#include<stdio.h>
#include<string.h>

int main(){


    char str1[11] = "Sri";
    char str2[] = "Sri"; 
    // strcat(str1,str2);
    int val = strcmp(str1,str2);
    printf("value is %d",val);
     return 0;

}