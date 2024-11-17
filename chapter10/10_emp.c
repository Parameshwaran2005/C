#include<stdio.h>

int main(){


    char name[10];
    int salary;
    printf("Enter your name ");
    scanf("%s",name);
    // printf("game");
    // printf("%s",name);
    printf("Enter your salary ");
    scanf("%d",&salary);
    FILE *ptr;
    ptr = fopen("code.txt","w");
    fprintf(ptr," %s,%d",name,salary);
    fclose(ptr);    
    
     
     return 0;

}