#include<stdio.h>
struct bank 
{
    char name[15];
    int accountnumber;
    int DOB;

};
void display(struct bank c)
{
        printf("Your name saved as %s \n",c.name);
        printf("Your accountnumber saved as %d \n",c.accountnumber);
        printf("Your Date of birth saved as %d \n",c.DOB);

}


int main(){


    struct bank acc;
    {
        printf("Enter your name ");
        scanf("%s",&acc.name);
        printf("Enter your account number ");
        scanf("%d",&acc.accountnumber);
        printf("Enter your DOB ");
        scanf("%d",&acc.DOB);

    };
    display(acc);
    
     return 0;

}