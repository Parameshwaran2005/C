#include<stdio.h>

int main(){


    int skip=3, i=0;
    while (i<10)
    {
        i++;
        if (i!=skip)
        {
            continue;
        }
        else
        {
            printf(" hello %d",i);
        }
        
    }
    
     return 0;

}