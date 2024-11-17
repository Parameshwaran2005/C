#include<stdio.h>
//miracle its actually function
int sum(int a);

int main(){


    int a =3;
    printf("The value of a is %d \n", sum(a));

     return 0;

}
int sum(int a)
{


    return a*10;
}