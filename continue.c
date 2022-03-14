#include<stdio.h>
void main(){
    int i,num,n,sum;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("enetr the number");
    scanf("%d",&num);
    if(i==2){
        continue;
    }
    sum=sum+num;
}
printf("%d",sum);
}