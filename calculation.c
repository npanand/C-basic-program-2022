#include<stdio.h>
int main(){
      float bs,da,hra,gs;
      printf("\n enter your basic salary");
      scanf("%f",&bs);
      da=bs*0.4;
      hra=bs*0.2;
      gs=bs+da+hra;
      
      printf("da\n:%.2f",da);
      printf("hra\n:%.2f",hra);
      printf("gs:\n%.2f",gs);
}