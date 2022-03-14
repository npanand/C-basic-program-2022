#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("enter a float price:");
    scanf("%f",&a);
    printf("enter a two float price:");
    scanf("%f",&b);
    c=(a-b)/15;
    printf("%f",c);
    if(d=a>b?a:b){
        printf("the highest value is%f",d);
    }

}