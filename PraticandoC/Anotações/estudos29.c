#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0) //if = se
        printf("\n\tValor negativo!\n");
    printf("\nContinuação do programa...\n");

    return 0;
}