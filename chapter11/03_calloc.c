#include<stdio.h>
#include<stdlib.h>


int main(){


     float *ptr;
     ptr = (float *) calloc(6,sizeof(float));
     for (int i = 0; i < 6; i++)
     {
          printf("Enter the value of %d element ",i+1);
          scanf("%f",&ptr[i]);
     }
     for (int i = 0; i < 6; i++)
     {
          printf("The value of %d element is %f \n",i+1, ptr[i]);
     }
     

     return 0;

}