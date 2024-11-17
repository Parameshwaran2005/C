#include<stdio.h>
#include<stdlib.h>


int main(){


     float *ptr;
     float *ptr2;
     ptr = (float *) malloc(60*sizeof(float));
    //  printf("How many floats you want ?\n");
    //  scanf("%f",&n);
     for (int i = 0; i < 60; i++)
     {
     ptr2 = (float *) malloc(6000000*sizeof(float));
          printf("Enter the value of %d element ",i+1);
          scanf("%f",&ptr[i]);
          free(ptr2);
     }
     for (int i = 0; i < 60; i++)
     {
          printf("The value of %d element is %.2f \n",i+1, ptr[i]);
     }
     

     return 0;

}