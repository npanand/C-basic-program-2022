#include <Stdio.h>
 void main(){
    int a[]={10,20,30,40};
    int *p=&a;
    printf("\n value of A  :%d",a);
     printf("\n value of A :%d",&a);
     
     printf("\n value of p:%d",p);
     
     printf("\n value of p :%d",&p);
     printf("\n value of k:%d",*p);
    
     printf("\n value of p :%d",sizeof(a));
      
      printf("\n value of p :%d",p++);
      printf("\n value of p :%d",*p);
      printf("\n value of p :%d",p++);
      printf("\n value of v :%d",*p);
      int h=10;
      printf("the pre %d",++h);
      printf("the pre %d",h);
      printf("the pre %d",h++);
      printf("the pre %d",h);
    
    
     
     }