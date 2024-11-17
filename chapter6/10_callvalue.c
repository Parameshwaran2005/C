#include<stdio.h>
//call by value it wont work
// int swap(int *a,int *b);
int wrong_swap(int a,int b);

int main(){

    int x=3,y=7;
    printf("the value of x and y before swap is %d and %d \n", x , y);
    wrong_swap(x,y); //call by value
    // swap(&x,&y); //call by reference

    printf("the value of x and y before swap is %d and %d \n", x , y);
    
     return 0;

}
// int swap(int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
int wrong_swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
