#include<stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr!='\0')
    {

     *ptr = *ptr - 1;
      ptr++;
    }
    
}

int main(){


    char c[45];
    printf("decrypt Your Sentence ");
    gets(c);
    // scanf("%s",&c);
    decrypt(c);
    printf("Your decrypted sentence %s ",c);

     return 0;

}