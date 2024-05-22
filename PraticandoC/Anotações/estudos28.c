#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Operadores relacionais

    menor que (a < b)
    maior que (a > b)
    menor ou igual (a <= b)
    maior ou igual (a >= b)
    igual (a == b)
    diferente (a != b)
    */

    int a = 10, b = 20;

    printf("\n\tResultado: %d\n\n", a < b); // Resultado: 1 (o número 1 simboliza que a afirmativa é VERDADEIRA == True)
    printf("\n\tResultado: %d\n\n", a > b); // Resultado: 0 (o número 0 simboliza que a afirmativa é FALSA == False)
    printf("\n\tResultado: %d\n\n", a <= b);
    printf("\n\tResultado: %d\n\n", a >= b);
    printf("\n\tResultado: %d\n\n", a == b);
    printf("\n\tResultado: %d\n\n", a != b);

    return 0;
}