#include<stdio.h>
void printout(int a,int b,int *sum,float *avg);

int main(){

    int a=3,b=10,sum;
    float avg;

    printout(a,b,&sum,&avg);
    printf("The value of sum is %d ",sum);
    printf("The value of avg is %.2f ",avg);
     return 0;

}
void printout(int a,int b,int *sum,float *avg)
{
    *sum = a + b;
    *avg = (float)*sum/2;
}