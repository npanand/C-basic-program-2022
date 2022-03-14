#include<stdio.h>
int main()
{
    float km,m,cm,ft,i;
    printf("enter the kilometer:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n m %0.2f",m);
    printf("\n cm %0.2f",cm);
    printf("\n i %0.2f", i);
    printf("\n ft %0.2f",ft);
    return 0;
}