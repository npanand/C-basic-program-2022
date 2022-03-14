#include<stdio.h>
void main(){
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d",a);
    printf("%d",b);
}