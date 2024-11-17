#include<stdio.h>
void printout(int a)
{
    printf("The address of i is %u \n ", &a);
}

int main(){


     int i=3;
     printf("The value of i is %d \n ", i);
     printout(i);   
     printf("The address of i is %u \n ", &i);     


     return 0;

}