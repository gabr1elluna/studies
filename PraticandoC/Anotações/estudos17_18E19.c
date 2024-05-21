#include <stdio.h>
#include <stdlib.h>

int main(){

    float x = 3.1415;

    long double y = 3.14159473982982332983; //Em caso de uso do long double, nos sistemas Linux e Mac, basta usar %Lf. Mas no caso de Windows, deve-se usar o comando da linha 11

    printf("Valor de y: %.10lf\n", y); //Para o double => use %lf
    __mingw_printf("Valor de y: %.15Lf\n", y);
    printf("Um double precisa de %d bytes de memória.\n", sizeof y);

    return 0;
}