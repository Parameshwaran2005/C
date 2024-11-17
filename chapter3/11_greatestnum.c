#include<stdio.h>

int main(){


     int a,b,c,d;
     printf("Enter your 1st number");
     scanf("%d",&a);
     printf("Enter your 2nd number");
     scanf("%d",&b);
     printf("Enter your 3rd number");
     scanf("%d",&c);
     printf("Enter your 4th number");
     scanf("%d",&d);
int e,f,g;
     if (a>b)
    {
        e=a;
    }
    else
    {
        e=b;
    }
    if(e>c)
    {
        f=e;
    }
    else
    {
        f=c;
    }
    if(f>d)
    {
        g=f;
        printf("The greatest number is %d", g);
    }
    else
    {
        g=d;
        printf("The greatest number is %d", g);
    }

     return 0;

}