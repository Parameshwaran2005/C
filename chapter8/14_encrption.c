#include<stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr!='\0')
    {

     *ptr = *ptr + 1;
      ptr++;
    }
    
}

int main(){


    char c[45];
    printf("Encrypt Your Sentence ");
    gets(c);
    // scanf("%s",&c);
    encrypt(c);
    printf("Your encrypted sentence %s ",c);

     return 0;

}