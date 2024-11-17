#include<stdio.h>
#include<string.h>
struct employee
    {
        int code;
        float salary;
        char name[10];
    };

int main(){


    struct employee e1;
    
        e1.code = 100;
        e1.salary = 25000.52;
        strcpy(e1.name,"SriKan");

        printf("Name of employee is %s\n",e1.name);
        printf("code is %d\n",e1.code);
        printf("salary of the employee is %.2f\n",e1.salary);
    
    
     return 0;

}