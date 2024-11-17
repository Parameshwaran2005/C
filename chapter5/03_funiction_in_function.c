#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){

    GoodMorning();
    
     return 0;

     

}

void GoodMorning()
{
    printf("Good Morning Sri \n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon Sri \n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night Sri \n");
}