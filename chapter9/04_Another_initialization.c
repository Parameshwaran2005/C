#include<stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;

};


int main(){

    struct employee e1 = {100,"sri",100.00};
    
        printf("The name of employee 1 is %s \n",e1.name);
        printf("The code of employee 1 is %d \n",e1.code);
        printf("The salary of employee 1 is %.2f \n",e1.salary);
    
    
     
     return 0;

}