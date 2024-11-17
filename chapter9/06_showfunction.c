#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[10];
    float salary;

};
void show(struct employee emp)
{
    printf("%d \n",emp.code);
    printf("%f \n",emp.salary);
    printf("%s \n",emp.name);
    emp.code=155;

}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1; 
    // (*ptr).code=108; //also you can write
    ptr->code=100;
    ptr->salary=10800;
    strcpy(ptr->name,"SRI");
    // printf("%d",e1.code);
    show(e1);
    printf("%d",e1.code);


     
     return 0;

}