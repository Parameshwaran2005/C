#include<stdio.h>
// It is from 97-122 for lowercase froma ascii table
int main(){


     char ch;
     printf("Enter the alphabet ");
     scanf("%c",&ch);

     if(ch>=97 && ch<=122)
     {
        printf("It is lowercase");
     }
     else
     {
        printf("it is not lowercase");
     }
     return 0;

}