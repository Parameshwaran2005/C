#include<stdio.h>

int main(){


    int factorial=1,n,i;
    printf("Enter value ");
    scanf("%d",&n);

    for (i = 1; i<=n ; i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d is %d ",n , factorial);
    

     return 0;

}