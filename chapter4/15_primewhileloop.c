#include<stdio.h>

int main(){


     int i,n,prime=1;
     printf("Enter number to check prime number ");
     scanf("%d",&n);


     while (i++)
     {
        if (n%i==0)
        {
            prime=0;
        }
        if (prime==0 && n!=2)
        {
            printf("This is not a prime number");
            break;
        }
        else
        {
            printf("This is a prime number");
            break;
        }
        
     }
     
     return 0;

}