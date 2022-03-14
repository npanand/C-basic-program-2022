#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float avg;
    printf("\n enter 5 marks :\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int  total=m1+m2+m3+m4+m5;
    avg=total/5;
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        if(avg>=90&&avg<=100)
        {
            printf("\n grade A");
        }
        else if(avg>=80&&avg<=90){
            printf("\n grade B");
        }
        else if(avg>=70&&avg<=80)
        {
            printf("\n grade c");
        }
        else{
            printf("\n no grade");
        }
    }
    else{
        printf("fail");
    }
    printf("%f",avg);
}