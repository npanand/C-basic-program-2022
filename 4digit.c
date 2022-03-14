#include<stdio.h>
int main(){
    int a,b,c,d,f,h,e;
    printf("\n enter the 4 digit no:");
    scanf("%d",&a);
     b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    h=f+c;
    printf("%d",h);
}