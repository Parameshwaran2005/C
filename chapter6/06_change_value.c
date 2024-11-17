#include<stdio.h>
int printout(int *a)
{
    *a=10**a;
    return *a;
}

int main(){


     int i=3;
     printf("The value of i is %d \n ", i);
     printout(&i);   
     printf("The value of i is %d \n ", i);     


     return 0;

}