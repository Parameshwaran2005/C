#include<stdio.h>
void slice(char *st,int m,int n)
{
    int i = 0;
    while ((i+m)<n)
    {
        st[i]=st[i+m];
       i++;
    }
    st[i]='\0';
}
int main(){


    char st[]="Srikan";
    slice(st,1,6);
    printf("sliced string is %s ",st);
     return 0;

}