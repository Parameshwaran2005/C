#include<stdio.h>

int main(){


    int  positive=0,arr[10]={1,2,5,8,-5,14,-45,7,14,-50};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>0)
        {
            positive = positive + 1;
        }
        
    }
        printf("Number of Positive digits are %d \n", positive);

    
     return 0;

}