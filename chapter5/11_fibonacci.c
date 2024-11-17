//failed program
#include<stdio.h>
int fibonacci(int n);
int main(){
    int m;
    printf("Enter number ");
    scanf("%d",&m);
    printf("The fibonacci number is %d ",fibonacci(m));
     
     return 0;

}
int fibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
    int result;
    result =(n-1) +(n-2);
    return result;
}
}