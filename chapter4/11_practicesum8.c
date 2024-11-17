#include<stdio.h>

int main(){


    int sum=0,i,n=8,mul;

    for(i=1;i<=10;i++)
    {
        mul=i*n;
        sum= sum + mul;
    }
    // while (i<=10)
    // {
    //     mul=i*n;
    //     sum=+mul;
    //     i++;
    // }
    
    printf("The sum is %d", sum);
     return 0;

}