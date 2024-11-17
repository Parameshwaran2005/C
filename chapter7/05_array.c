#include<stdio.h>
// void printarray(int *ptr,int n)
// {
//     for (int i = 0; i < n; i++)
//      {
//         printf("The value of element %d is :%d \n",i+1 , *(ptr+i));
//      }
// }
void printarray(int ptr[],int n)
{
    for (int i = 0; i < n; i++)
     {
        printf("The value of element %d is :%d \n",i+1 , ptr[i]);
     }
     ptr[2]=355;
}

int main(){


    int elements[] = {20,15,42,85,55};
    printarray(elements,5);
    printf("%d",elements[2]);
    
    
     return 0;

}