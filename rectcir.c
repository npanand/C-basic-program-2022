#include<stdio.h>
int main(){
    float l,b,r,r_area,r_peri,c_area,c_circukam;
    printf("\n enter length &breadth");
    scanf("%f%f",&l,&b);
    printf("\n enter radius ");
    scanf("%f",&r);
    c_area=3.14*r*r;
    c_circukam=(2*3.14*r);
    r_area=l*b;
    r_peri=(2*(l+b));
    printf("area of rectangle %.1f",r_area);
    printf("area of rectangle %.2f",r_peri);
    printf("area of circle %.2f",c_area);
    printf("area of circle %.2f",c_circukam);
}