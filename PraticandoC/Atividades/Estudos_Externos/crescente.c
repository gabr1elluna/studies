#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    while(x != y){
        if(x < y){
            printf("CRESCENTE\n");
        }else{
            printf("DECRESCENTE\n");
        }
        printf("Digite outros dois números: ");
        scanf("%d %d", &x, &y);
    }

    return 0;
}