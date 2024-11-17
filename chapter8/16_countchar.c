#include<stdio.h>
int occurence(char st[],char c);
int main(){


    char st[]="srikaaan";
    // printf("count Your desired character in this sentence ");
    // gets(st);
    // printf("Enter Your desired character to count ");
    // scanf("%s",a);
    // gets(a);
    int count = occurence(st,'a');
    // printf("Occurence of given '%s' character is %d ",a,count);
    printf("Occurence is %d ",count);
     return 0;

}
int occurence(char st[],char c)
{
    char *ptr = st;
    int count=0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
        ptr++;
        
    }
    return count;
    
}