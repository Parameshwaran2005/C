#include<stdio.h>

int main(){

    int n_students=2;
    int n_subjects=3;
    int marks[2][3];
    for (int i = 0; i < n_students; i++)
    {for (int j = 0; j < n_subjects; j++)
    {
       printf("Enter the marks of student %d in subject %d ", i+1,j+1 );
       scanf("%d",&marks[i][j]); 
    }
    
    }
    for (int i = 0; i < n_students; i++)
    {for (int j = 0; j < n_subjects; j++)
    {
    printf("the marks of student %d in subject %d is %d\n ", i+1,j+1,marks[i][j]);
    }
    
    }
    





     
     return 0;

}