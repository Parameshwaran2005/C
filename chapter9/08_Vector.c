#include<stdio.h>

struct vector
{
  int x;
  int y;
};


int main(){


     struct vector v1,v2;
     
        v1.x=50;
        v1.y=23;
        printf("The x is %d and y is %d \n",v1.x , v1.y);

        v2.x=24;
        v2.y=25;
        printf("The x is %d and y is %d \n",v2.x , v2.y);
     
     
     return 0;

}