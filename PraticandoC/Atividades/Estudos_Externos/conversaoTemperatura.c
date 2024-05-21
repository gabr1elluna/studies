#include <stdio.h>
#include <stdlib.h>

int main(){

    float celsius, fahrenheit;
    char option;

    do{
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = 9.0 * celsius / 5.0 + 32.0;

        printf("\nEquivalente em Fahrenheit: %.1f", fahrenheit);
        printf("\nDeseja verificar outro valor?\n(S para Sim / N para Não)\n");
        scanf(" %c", &option);
    }while (option == 'S');

    return 0;
}