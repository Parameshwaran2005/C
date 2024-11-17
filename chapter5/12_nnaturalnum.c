//not recursive
#include <stdio.h>

int main()
{

    int n, i;
    float sum;
    printf("Enter value of n ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of 1-%d natural number is %f \n ",n, sum);

    return 0;
}