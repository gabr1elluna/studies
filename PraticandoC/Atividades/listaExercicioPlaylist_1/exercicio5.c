#include <stdio.h>
#include <stdlib.h>

int main(){

    int preco_por_dia = 45, dias_trabalhados;
    float imposto, quantia_liquida, quantia_final;

    printf("Quantos dias o encanador trabalhou? ");
    scanf("%d", &dias_trabalhados);

    quantia_liquida = preco_por_dia * dias_trabalhados;

    imposto = quantia_liquida * 8 / 100;

    quantia_final = quantia_liquida - imposto;

    printf("A quantia a ser paga ao encanador é de R$%.2f\n", quantia_final);
    printf("Imposto de renda = R$%.2f\n", imposto);
    printf("Valor líquido original = R$%.2f\n", quantia_liquida);

    return 0;
}