#include<stdio.h>
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
int main(){


    char st[]="srikaaan";
    int count = occurence(st,'a');
    if (count>1)
    {
    printf("Yes character a is present");
    }
    else 
    {
    printf("NO character a is not present");
    }
    
     return 0;

}

