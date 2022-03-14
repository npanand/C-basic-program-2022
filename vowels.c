#include<stdio.h>
void main(){
    char ch;
    printf("\n enter athe value");
    scanf("%c",&ch);
    switch(ch){
        case 'a':{
            printf("th e a  print");
            break;
        }
        case 'e':{
            printf("the e print");
            break;
        }
        case 'i':{
            printf("the i print");
            break;
        }
        case 'o':{
            printf("the  o print");
            break;
        }
        case 'u':{
            printf("the u print");
            break;
        }
        default:
        {
            printf("no nu,ber");
            break;
        }

    }
    
}