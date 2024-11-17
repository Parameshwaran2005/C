#include<stdio.h>

int main(){


     int n,sum=0,i=1;
     printf("Enter number ");
     scanf("%d",&n);

    //  for (i = 0; i<=n;i++)
    //  {
    //    sum=i + sum;
    //  }

    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    
     

    //  while(i<=n)
    //  {
    //   sum=i + sum;
    //   i++;
    //  }
       printf("The sum of 1 - %d is %d ", n,sum);
     
     return 0;

}