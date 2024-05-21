#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Insira um valor para as variáveis A e B, respectivamente: ");
    scanf("%d %d", &a, &b); 

    a = a + b;
    b = a - b;
    a = a - b;


    printf("Valor de A: %d\nValor de B: %d", a, b);

    return 0;
}