#include <stdio.h>
#include <stdlib.h>

int main(){
    // O operador 'unsigned' retira o sinal negativo, ou seja, ele verifica apenas de 0 até o maior número inteiro possível (2147483647)
    // unsigned -> %u
    // unsigned short int -> %hu ou %d
    // unsigned long int -> %lu

    unsigned int x = 2147483647; 

    
    unsigned short int y = 55000;
    
    
    printf("\n\t%hu\n\n", y);
    printf("\n\t%u\n\n", ++x);




    return 0;
}