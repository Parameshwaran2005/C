#include<stdio.h>
int main()
{
    // Take input from user and print the table
    int num,mul;
    printf("Enter the number you want multiplication table \n");
    scanf("%d",&num);
    // for (int i = 1; i <= 10; i++)
    // {
    //     mul = num*i;
    //     printf("The multiplication table is %d x %d = %d \n",num,i,mul);
        
    // }


    // Alternate way

    for (int i = 0; i < 10; i++)
    {
        printf("The multiplication table is %d x %d = %d \n",num,i+1,num*(i+1));
    }
    
    
    
    return 0;
}