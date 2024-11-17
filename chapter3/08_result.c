#include<stdio.h>

int main(){


    int physics,chemistry,maths;
    printf("Enter physics marks \n");
    scanf("%d",&physics);
    printf("Enter chemistry marks \n");
    scanf("%d",&chemistry);
    printf("Enter maths marks \n");
    scanf("%d",&maths);

    float total = (physics+chemistry+maths)/3;
    if ((total<44) || (physics<33) || (chemistry<33) || (maths<33))
    {
        printf("Your percentage is %f You have failed", total);
    }
    else
    {
        printf("your percentage is %f You have passed", total);
    }
    

     return 0;

}