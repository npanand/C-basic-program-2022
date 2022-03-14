#include<stdio.h>
int main(){
    int ch,q,i;
    label:
    printf("\n\t menu card "); 
    printf("\n\t\t coffee");
    printf("\n\t\t tea");
    printf("\n\t\t cold coffee");
    printf("\n\t\t milk shake");
    printf("enter your choice");
    scanf("%d",&ch);
    
    switch(ch){
        
        case 1:
        {
            printf("\n you have selected cofee");
            printf("\nenter the q");
            scanf("%d",&q);
            printf("\n total amount :%d",(q*15));
            break;
        }
        
        case 2:
        {
            printf("\n you have selected tea ");
            printf("\nenter the q");
            scanf("%d",&q);
            printf("\n total amount :%d",(q*10));
            break;
        }
        
        case 3:
        {
            printf("\n you have selected coldcofee");
            printf("\nenter the q");
            scanf("%d",&q);
            printf("\n total amount :%d",(q*25));
            break;
        }
        case 4:
        {
            printf("\n you have milk shake");
            printf("\nenter the q");
            scanf("%d",&q);
            printf("\n total amount :%d",(q*50));
            break;
        }
        default:{
            printf("you dont choice any choice");
        break;
        
        }
       
    }
     printf("do you want choice");
        scanf("%d",&i);
        if(i==1)
        {
            goto label;
        }
        printf("thank you again");
}