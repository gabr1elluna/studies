#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor de x: %lli\n", x);

    /*
    Para um long int => use %ld ou %li
    Para um long long int => use %lld ou %lli
    NÃO EXISTE 'long long long int'
    */

    return 0;
}