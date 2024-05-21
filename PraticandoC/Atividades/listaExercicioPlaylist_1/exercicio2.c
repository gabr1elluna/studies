#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;

    printf("Insira um valor para as variáveis A e B, respectivamente: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("Valor de A: %d\nValor de B: %d", a, b);



    return 0;
}