#include<stdio.h>
#include<string.h>
//wait
struct employees
{
    char name[10];
    int code;
    float salary;
};


int main(){


    struct employees e1 ,e2 ,e3 ;
    
        printf("Enter the name of e1 ");
        scanf("%s",e1.name);
        printf("Enter the code of e1 ");
        scanf("%d",&e1.code);
        printf("Enter the salary of e1 ");
        scanf("%f",&e1.salary);

        printf("Enter the name of e2 ");
        scanf("%s",e2.name);
        printf("Enter the code of e2 ");
        scanf("%d",&e2.code);
        printf("Enter the salary of e2 ");
        scanf("%f",&e2.salary);

        printf("Enter the name of e3 ");
        scanf("%s",e3.name);
        printf("Enter the code of e3 ");
        scanf("%d",&e3.code);
        printf("Enter the salary of e3 ");
        scanf("%f",&e3.salary);


        printf("The name of employee 1 is %s \n",e1.name);
        printf("The code of employee 1 is %d \n",e1.code);
        printf("The salary of employee 1 is %.2f \n",e1.salary);
        printf("The name of employee 2 is %s \n",e2.name);
        printf("The code of employee 2 is %d \n",e2.code);
        printf("The salary of employee 2 is %.2f \n",e2.salary); 
        printf("The name of employee 3 is %s \n",e3.name);
        printf("The code of employee 3 is %d \n",e3.code);
        printf("The salary of employee 3 is %.2f \n",e3.salary); 
    
    
     return 0;

}