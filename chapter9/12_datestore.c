#include<stdio.h>

typedef struct date
{
   int date;
   int month;
   int year;
    int time;

}date;

int datecmp(date d1,date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }
    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }
    if(d1.date>d2.date)
    {
        return 1;
    }
    if(d1.date<d2.date)
    {
        return -1;
    }
    if(d1.time>d2.time)
    {
        return 1;
    }
    if(d1.time<d2.time)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void display(date d)
 
{
    printf("The date is %d/%d/%d/%d \n",d.date,d.month,d.year,d.time);
};


int main(){

    date d1 = {23,12,2005,10};
    date d2= {24,12,2005,1};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printf("The Date comparison function %d ",a);
     
     return 0;

}