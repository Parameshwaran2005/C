#include<stdio.h>

int main(){


    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("You have Grade A");
    }
    if(marks>=80 && marks<90)
    {
        printf("You have Grade B");
    }
    if(marks>=70 && marks<=80)
    {
        printf("You have Grade C");
    }
    if(marks>=60 && marks<=70)
    {
        printf("You have Grade D");
    }
    if(marks>=50 && marks<=60)
    {
        printf("You have Grade E");
    }
    if(marks<50)
    {
        printf("You have Grade F");
    }
     return 0;

}