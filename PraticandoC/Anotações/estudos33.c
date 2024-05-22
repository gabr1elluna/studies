#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("Operador ternário:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a 0!")
    //Estrutura do operador ternário abaixo:
    // condição ? verdadeiro : falso

    printf("\n\nIf/else\n");
    if(a < 0){
        printf("\n\tValor negativo!\n");
    }
    else{
        printf("\n\tValor positivo ou igual a 0!");
    }
    printf("\nContinuação do programa...\n");
    return 0;
}