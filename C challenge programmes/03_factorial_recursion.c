#include<stdio.h>
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else if (n=0)
    {
        return 1;
    }
    else
    {
        return 1;
    }
    
}
    // else
    // {
    //     return 1;
    // }
int main()
{
    
    
    for(int i=0;i<5;i)
    {
    int n;
    printf("Enter a positive integer for factorial ");
    scanf("%d",&n);
    
    printf("The factorial of given number %d is %d \n",n,fact(n));
    continue;
    
    }
    return 0;
}