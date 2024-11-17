#include<stdio.h>
float weight(int mass);

int main(){
    int m;
    printf("Enter Mass in kgs ");
    scanf("%d",&m);
    printf("The weight in newton is %.2f ",weight(m));

     return 0;

}

float weight(int mass)
{
    float result;
    result = mass*9.8;
    return result;

}