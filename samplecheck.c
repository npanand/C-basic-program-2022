#include<stdio.h>
int main(){
    char a[10];
    int b;

    int year;
scanf("%d",&year);

    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("the leap year is %d",year);
        }
        else{
              printf("the leap year is %d",year);
        }

    }
    else{ 
        if(year%4==0)
        {
            printf("the leap year is %d",year);
        }
        else{
              printf("the leap year is %d",year);
        }

    }
    return 0;
}