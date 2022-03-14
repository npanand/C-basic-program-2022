#include<stdio.h>
int main(){
    int popu=80000, pop_men,pop_women,pop_lit;
    pop_men=(52*popu)/100;
    pop_lit=(48*popu)/100;
    pop_women=popu-pop_men;
    int men_lit=(35*popu)/100;
    int women_lit=popu-men_lit;

    printf("%d\n",women_lit);
    printf("%d\n",men_lit);
    printf("%d\n",pop_men);
    printf("%d\n",pop_women);
    printf("%d\n",pop_lit);
}
