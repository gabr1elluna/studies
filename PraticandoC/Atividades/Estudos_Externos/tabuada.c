#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, produto;

    printf("Digite um valor inteiro para ver sua tabuada do 1 até o 10: ");
    scanf("%d", &x);

    for(int i = 1; i < 11; i++){
        produto = i * x;
        printf("\n%d x %d = %d", x, i, produto);
    }

    printf("\nFIM DA TABUADA!");

    return 0;
}