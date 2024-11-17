#include<stdio.h>

int main(){

    int i=2,n,prime=1;
    printf("Enter number ");
    scanf("%d",&n);
    do
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
    } while (i++);
     
     return 0;

}