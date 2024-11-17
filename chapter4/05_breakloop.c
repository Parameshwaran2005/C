#include <stdio.h>

int main()
{

    int  i;
    printf("Enter the natural number ");
    scanf("%d", &i);

    do
    {
        printf("The value of natural number is %d \n ",i);
        
        if (i == 5)
        {
            break;
        }
        i++;
    } while (i < 10);

    return 0;
}