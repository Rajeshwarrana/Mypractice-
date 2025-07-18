#include<stdio.h>

int main(){
    int sum = 0 ;

    printf("ODD NUMBERS BETWEEN 0 TO 100 ARE :-  ");

    for(int i = 0 ; i <= 100 ; i++ ){
        if (i % 2 != 0){
            printf("  %d",i);
            sum = sum + i;
        }
    }
    printf("\n");

    printf("SUM OF ALL THE NUMBER IS  :- %d" , sum);
    

    return 0;

} 