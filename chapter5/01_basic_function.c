#include<stdio.h>
void display(); //function prototype

int main(){

    printf("Initializing display \n");
    display(); //function call
    printf("Display finished \n");


 
     return 0;

}

void display() //function display
{
    printf("This is display \n");
}