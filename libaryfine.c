#include<stdio.h>
int main(){
    int day;
    printf("the enter date");
    scanf("%d",&day);
    if(day>=0&&day<=5)
    {
        printf("\n fine .50 paise");
    }
    else if(day>=6&&day<=10)
    {
        printf("\n fine one rupee paise");
    }
    else if(day>=11&&day<=15)
    {
        printf("\n fine 1.50 paise");
    }
    else{
        printf("\n the membership is cancleed");
    }
}