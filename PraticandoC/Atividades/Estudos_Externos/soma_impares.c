#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, soma = 0;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    if(x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }

    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }

    printf("SOMA DOS ÍMPARES = %d", soma);


    return 0;
}