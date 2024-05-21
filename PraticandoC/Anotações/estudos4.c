#include <stdio.h>
#include <stdlib.h>

int main(){

    // tipo nome;
    float num1 = 3.1415 , num2;

    printf("Valor da minha variável: %.4f\n", num1);

    printf("Digite um número real: ");
    scanf("%f", &num2);

    printf("Valor lido: %.3f", num2);

    return 0;
}