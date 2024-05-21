#include <stdio.h>
#include <stdlib.h>

/*
    Soma -> +
    Subtração -> -
    Multiplicação -> *
    Divisão -> /

*/
int main(){

    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi; //Transformei o valor de pi em um inteiro, porém, com isso, perdi a parte decimal do valor original, ficando apenas a parte inteira

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %.1f\n", a / (float)b); //Estou trasnformando a variável 'b' em float

    return 0;
}