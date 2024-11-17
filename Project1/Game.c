#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){


    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;
    // printf("Number is %d \n",number);
    do
    {
        printf("Guess the Number between 1-100 please \n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please \n");
        }
        else if (guess<number)
        {
            printf("Higher number please \n");
        }
        else{
            printf(" Congrats You have guessed it in %d attempts \n",nguesses);
        }
        nguesses++;
        
    } while (number!=guess);
    
     return 0;

}