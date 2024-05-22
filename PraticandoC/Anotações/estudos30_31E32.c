#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado lógico: %d\n", a < 0); // 1 = True | 0 = False

    if(a < 0){ //if = se
        printf("\n\tValor negativo!\n");
    }
    else{ //else = senão
        printf("\n\tValor positivo ou igual a 0!");
    }
    printf("\nContinuação do programa...\n");
    return 0;
}