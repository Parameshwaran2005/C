#include<stdio.h>
float temperature(int celsius);


int main(){
    int a,b;

    printf("Enter temperature in celsius ");
    scanf("%d",&a);
    printf("The temperature in fahrenheit is %f ",temperature(a));
    
     return 0;

}
float temperature(int celsius)
{
    float fahrenheit;
    fahrenheit= (celsius*9/5) + 32;
    return fahrenheit;
}