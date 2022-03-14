#include<stdio.h>
void main(){
    int i,a[10],n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("eneter the value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the value is ");
        printf("%d",a[i]);
        printf("\n");
    }
    
}