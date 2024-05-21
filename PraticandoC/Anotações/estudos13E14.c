#include <stdio.h>
#include <stdlib.h>

int main(){
   int y = 0;
    short int x = 32767;    //NÃO EXISTE 'short short int'

    printf("Valor de x: %d\n", x);
    x++; //x++ = aumenta em 1 unidade o valor de x
    printf("Valor de x: %hi\n", x);



    return 0;
}