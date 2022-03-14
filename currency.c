#include<stdio.h>
void main()
{
    int a;
    printf("enter a currency:");
    scanf("%d",&a);
    printf("\n requires notes of 100:%d",(a/100));
    printf("\n required notes of 10: %d",((a%100)/10)); 
    printf("\n required notes of 50: %d",((a%100)/50));
     
    printf("\n required notes of 50: %d",((a%100)/5));
    
}