#include <stdio.h>
#include <stdlib.h>

int main(){

    float reais, dolar;

    printf("Insira o valor desejado em reais (R$): ");
    scanf("%f", &reais);

    dolar = reais / 5.3;               //1 US$ = R$5,30

    printf("Valor convertido para dólar: US$%.2f", dolar);




    return 0;
}