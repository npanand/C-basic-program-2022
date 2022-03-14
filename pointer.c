#include <Stdio.h>
 void main(){
    int a= 10,*p;
    p=&a;
    printf("\n value of A  :%d",a);
     printf("\n value of A :%d",&a);
     
     printf("\n value of p:%d",p);
     
     printf("\n value of p :%d",&p);
     printf("\n value of p :%d",*p);
     
     
     }