#include<stdio.h>

typedef struct complex
{
    int real;
    int complex;
}comp;
void display(comp c)
{
    printf("the real number is %d \n",c.real );
    printf("the complex number is %d \n",c.complex );
}



int main(){

    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real number %d ",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter complex number %d ",i+1);
        scanf("%d",&cnums[i].complex);
    }
for (int i = 0; i < 5; i++)
{
    display(cnums[i]);
}
    
     return 0;

}