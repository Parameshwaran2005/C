#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    char name[10];
    float salary;

} emp;

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1; 
    ptr->code=100;
    ptr->salary=10800;
    strcpy(ptr->name,"SRI");
    printf("%d \n",e1.code);
    printf("%f \n",e1.salary);
    printf("%s \n",e1.name);


     
     return 0;

}