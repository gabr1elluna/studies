#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;

    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3); //Não importa se usar barra de espaço ou enter, o programa só finalizará quando ele ler 3 valores inteiros

    printf("Valores lidos: %d, %d e %d\n", num1, num2, num3);


    return 0;
}