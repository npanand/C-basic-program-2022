#include <stdio.h>
void main(){
 int a;
 printf("the number is:");
 scanf("%d",&a);
 int d1,d2,d3,a1,a2;
 d3=a%10;//3
 a1=a/10;//15
 d2=a1%10;//5
 d1=a1/10;//1
 printf("%d%d%d",d1,d2,d3);
 int b=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
if(b==a){
    printf("armstrong number");
}
else{
    printf("not armstrong number");
}
 
}