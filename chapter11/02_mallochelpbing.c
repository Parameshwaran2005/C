#include<stdio.h>
#include<stdlib.h>

int main(){

     // Declare a pointer to store an array of floats
     float *arr;
     // Allocate memory for 6 floats and check if successful
     arr = (float *) malloc(6*sizeof(float));
     if (arr == NULL) {
          printf("Memory allocation failed\n");
          return 1;
     }
     // Loop over the array and get the values from the user
     for (int i = 0; i < 6; i++)
     {
          printf("Enter the value of %d element ",i+1);
          scanf("%f",&arr[i]);
     }
     // Loop over the array and print the values
     for (int i = 0; i < 6; i++)
     {
          printf("The value of %d element is %f \n",i+1, arr[i]);
     }
     
     // Free the memory allocated by malloc
     free(arr);

     return 0;

}