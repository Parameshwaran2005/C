#include<stdio.h>
#include<stdlib.h>


int main(){

     int *ptr;
     // printf("before malloc size of integer was %d \n",sizeof(int));
     // ptr = (int *) malloc(6*sizeof(int));
     // printf("after malloc size of integer is %d \n",sizeof(int));
    //nothing changed why?

     ptr = (int *) malloc(6*sizeof(int));
     for (int i = 0; i < 6; i++)
     {
          printf("Enter the value of %d element ",i+1);
          scanf("%d",&ptr[i]);
     }
     for (int i = 0; i < 6; i++)
     {
          printf("The value of %d element is %d \n",i+1, ptr[i]);
     }
     

     return 0;

}