#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you,char comp)
{
    //for draw
    if (you==comp)
    {
        return 0;
    }
    //for non draw
    if (you=='r' && comp=='p')
    {
        return -1;
    }
    else if (you=='p' && comp=='r')
    {
        return 1;
    }
    if (you=='r' && comp=='s')
    {
        return 1;
    }
    else if (you=='s' && comp=='r')
    {
        return -1;
    }
    if (you=='p' && comp=='s')
    {
        return -1;
    }
    else if (you=='s' && comp=='p')
    {
        return 1;
    }
    
    
    
}

int main(){
    char you,comp;
    int number;
    srand(time(0));
    number=rand()%100 + 1;
    if (number<33)
    {
        comp='r';
    }
    else if (number>33 && number<66)
    {
        comp='p';
    }
    else
    {
        comp='s';
    }
    printf("choose 'r' for rock 'p' for paper 's' for scissor  \n");
    scanf("%c",&you);
    int result = rockpaperscissor(you,comp);
    printf("you choose %c and computer choose %c  \n",you,comp);
    if (result==0)
    {
        printf("Game draw! \n");
    }
    if (result==1)
    {
        printf("You won! \n");
    }
    if (result==-1)
    {
        printf("You lose! \n");
    }

     return 0;

}