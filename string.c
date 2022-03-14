#include<stdio.h>
#include<string.h>
void main(){
 char c[20],a[10],f;
 char d[10]={'a','b,'c','\0'};
 
 char e[10]={'c','b,'a','\0'};
 
 printf("enter the string:");
 gets(c);
 printf("\nlength :%d",strlen(c));
 printf("\nreverse :%s",strrev(c));
 printf("\nupper :%s",strupr(c));
 printf("\nlower :%s",strlwr(c));
 printf("\ncopy :%s",strcpy(a,c));
 printf("\nthe copy is%s",a);
 f=strcat(d,e);
 printf("\ncat %s",f);

}