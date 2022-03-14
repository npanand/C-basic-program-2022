#include<stdio.h>
int  main(){
    int a,b,c,sum=0;
    printf("enter 5 digit no:");
    scanf("%d",&a);//12345
    int d,e,f,g,i;
    b=a/10;//1234
    c=a%10;//5
    sum=+c;//5
    d=b/10;//123
    e=b%10;//4
    sum+=e;//4+5
    f=d/10;//12
    g=d%10;//3
    sum+=g;//5+4+3=12
   int h=f/10;//1
    i=f%10;//12+2=4
    sum+=h;
    sum+=i;
   return 0;
   printf("%d",sum);
}