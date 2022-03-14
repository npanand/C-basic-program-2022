#include <Stdio.h>
 void main(){
    int a= 10,*p,**b,***d;
    p=&a;
    printf("\n value of A  :%d",a);
     printf("\n value of A :%d",&a);
     
     printf("\n value of p:%d",p);
     
     printf("\n value of p :%d",&p);
     printf("\n value of p :%d",*p);
     
     b=&p;
    printf("\n value of A  :%d",p);
     printf("\n value of A :%d",&p);
     
     printf("\n value of p:%d",b);
     
     printf("\n value of p :%d",&b);
     printf("\n dereference of p :%d",**b);
     

     d=&b;
    printf("\n value of A  :%d",b);
     printf("\n value of A :%d",&b);
     
     printf("\n value of p:%d",d);
     
     printf("\n value of p :%d",&d);
     printf("\n dereference of p :%d",***d);
     

     
     }