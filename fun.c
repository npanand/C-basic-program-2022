#include<stdio.h>
int add();
void main(){
    printf("%d",add());
}
int add(){
    int c=10 ,d=20,e;
    e=c+d;
    printf("%d",e);
    return e;

    }