#include<stdio.h>

int main(){


     FILE *ptr;
     int num;
     printf("Enter the integer value ");
     scanf("%d",&num);
     ptr = fopen("table.txt","w");
     for (int i = 0; i < 10; i++)
     {
        fprintf(ptr,"%d x %d = %d \n",num,i+1,num*(i+1));
     }
     fprintf(ptr,"sucessfully generated table of %d \n",num);
     fclose(ptr);
     
     return 0;

}