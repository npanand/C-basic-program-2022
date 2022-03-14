#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float avg,total;
    printf("the first mark is");
    scanf("%d",&a);
    printf("\nthe second mark is");
    scanf("%d",&b);
    printf("\nthe third mark is");
    scanf("%d",&c);
    printf("\nthe fourth mark is");
    scanf("%d",&d);
    printf("\nthe five mark is");
    scanf("%d",&e);
    total=a+b+c+d+e;
    avg=total/5;
    printf("the avg is %.1f",avg);

}