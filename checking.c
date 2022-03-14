#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n enter two number\n");
    printf("the first number is a:");
    scanf("%d",&a);
    printf("the second number is b:");
    scanf("%d",&b);
    
    c=a+b;
    d=a-b;
    e=a%b;
    float f=(float)a/(float)b;
    printf("%u",c);
    printf("\nthe sub number is \n%d",d);
    printf("\nthe module number is  \n %d",e);
    printf("\nthe divide float number is  \n %f",f);
    return 0;
}