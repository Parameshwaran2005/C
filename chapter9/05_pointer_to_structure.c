#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[10];
    float salary;

};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1; 
    // (*ptr).code=108; //also you can write
    ptr->code=100;
    printf("%d",e1.code);
    


     
     return 0;

}