#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,result;
    printf("\n enter 5 digit no:");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5
    d=b/10;//123
    e=b%10;//4
    f=d/10;//12
    g=d%10;//3
    h=f/10;//1
    i=f%10;//2
    result=(c*10000)+(e*1000)+(g*100)+(i*10)+h;
    printf("\n reverse number of 5 digit is no :%d",result);
}