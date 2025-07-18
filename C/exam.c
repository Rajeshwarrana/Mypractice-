#include<stdio.h>

int main(){

    for(int i = 0 ; i <= 10 ; i++ ){
        printf("\n");
        for(int j = 1 ; j <= i ; j++){
            printf("*");        
        }
    }
    return 0;
    
}