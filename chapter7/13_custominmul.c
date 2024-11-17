#include<stdio.h>
void printtable(int *multable,int num,int n)
{
    printf("The multipliction table of %d is \n",num);
    for (int i = 0; i < n; i++)
    {
        multable[i]=num*(i+1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%dx%d = %d \n",num,i+1 ,multable[i]);
    }
    printf("*******");
    
}
int main(){
    
        int multable[3][10],a,b,c;
        printf("Enter number a");
        scanf("%d",&a);
        printf("Enter number b");
        scanf("%d",&b);
        printf("Enter number c");
        scanf("%d",&c);

        printtable(multable[0],a,10);
        printtable(multable[1],b,10);
        printtable(multable[2],c,10);

     
     return 0;

}