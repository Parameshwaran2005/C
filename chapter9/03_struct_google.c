#include<stdio.h>
#include<string.h>
struct employee
{
   int code;
   float salary;
   char name[10];

};


int main(){

    struct employee google[100];
    google[0].code=100;
    google[0].salary=100;
    strcpy(google[0].name,"Sri");
    printf("%d",google[0].code);
    printf("\n");
    printf("%s",google[0].name);
    printf("\n");
    printf("%.2f",google[0].salary);
    printf("\n");
     
     return 0;

}