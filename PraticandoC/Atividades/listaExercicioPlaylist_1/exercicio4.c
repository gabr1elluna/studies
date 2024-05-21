#include <stdio.h>
#include <stdlib.h>

int main(){

    int clientes;
    float despesa, gorjeta, conta, contaDividida;

    printf("Quanto foi a despesa do restaurante? ");
    scanf("%f", &despesa);

    gorjeta = despesa * 10/100;

    printf("Quantas pessoas consumiram no restaurante? ");
    scanf("%d", &clientes);

    conta = despesa + gorjeta;
    contaDividida = (despesa + gorjeta) / clientes;

    printf("A conta final ficou no valor de R$%.2f . E para cada cliente ficou R$%.2f .", conta, contaDividida);

    return 0;
}