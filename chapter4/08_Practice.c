#include <stdio.h>

int main()
{

    int m, i;
    printf("Enter the number ");
    scanf("%d", &i);
    
    
    for (m = 1; m <= 10; m++)
    {
        int c = i * m;
        printf("The multiplication table is %d*%d = %d \n", i, m, c);
        if (m == 10)
        {
            break;
        }
        
        
}
    return 0;
}