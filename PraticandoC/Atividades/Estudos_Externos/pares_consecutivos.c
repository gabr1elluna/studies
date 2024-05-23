#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    while(x != 0){
        if(x % 2 != 0){
            x += 1;
        }
        soma = 5 * x + 20;
        printf("\nSOMA = %d\n", soma);

        printf("Digite um número inteiro: ");
        scanf("%d", &x);
    }

    return 0;
}