#include <stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main(){
    int a,b;
      printf("the enetr two values :");
    scanf("%d%d",&a,&b);
      printf("the before swappimg A:%d and b :%d",a,b);
      swap(&a,&b);
      printf("the after swappimg A:%d and b :%d",a,b);
}
