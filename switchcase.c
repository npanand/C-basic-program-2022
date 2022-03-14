#include<stdio.h>
void main(){
    int ch;
    printf("\n enter athe value");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            printf("the one print");
            break;
        }
        case 2:{
            printf("the two print");
            break;
        }
        case 3:{
            printf("the third print");
            break;
        }
        default:
        {
            printf("no nu,ber");
            break;
        }

    }
    
}