#include <Stdio.h>
 void main(){
    int a= 10,*p,**c;
    p=&a;
    c=p+1;
    printf("\n value of A  :%d",a);
     printf("\n value of A :%d",&a);
     
     printf("\n value of p:%d",c);
     
     printf("\n value of p :%d",&c);
     printf("\n value of p :%d",**c);
     
     
     }