#include<stdio.h>
#include<stdlib.h>


int main(){


     float *ptr;
     float n;
     ptr = (float *) calloc(n,sizeof(float));
     printf("How many floats you want ?\n");
     scanf("%f",&n);
     for (int i = 0; i < n; i++)
     {
          printf("Enter the value of %d element ",i+1);
          scanf("%f",&ptr[i]);
     }
     for (int i = 0; i < n; i++)
     {
          printf("The value of %d element is %f \n",i+1, ptr[i]);
     }
     

     return 0;

}