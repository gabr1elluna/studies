#include <stdio.h>
#include <stdlib.h>

int main(){

    int resultado, contador = 10;
    /*
    Sinônimos de incrementação:
    
    contador++;
    contador += 1;
    contador = contador + 1;
    
    */

   //resultado = ++contador; Desse jeito, a variável 'resultado' terá valor 11.
   //resultado = contador++; Desse jeito, a variável 'resultado' terá valor 10, e depois será atualizado com o valor 11.

    //printf("Valor: %d\n", ++contador);  ++Exemplo -> Será incrementado +1 antes, ou seja, antes de ser feita a atribuição, o computador irá incrementar primeiro.
    //printf("Valor: %d\n", contador++);  Exemplo++ -> Será incrementado +1 depois, ou seja, fará a atribuição do valor da variável primeiro, depois será incrementado.
    
    

    /*
    Sinônimos de decremento:

    contador--;
    contador -= 1;
    contador = contador - 1;

    */

    //printf("Valor: %d\n", --contador);    --Exemplo -> Será decrementado -1 antes, ou seja, antes de ser feita a atribuição, o computador irá decrementar primeiro.
    //printf("Valor: %d\n", contador--);    Exemplo-- -> Será decrementado -1 depois, ou seja, fará a atribuição do valor da variável primeiro, depois será decrementado

    //resultado = --contador; Desse jeito, a variável 'resultado' terá valor 9.
    //resultado = contador--; Desse jeito, a variável 'resultado' terá valor 10, e depois será atualizado com o valor 9.

    printf("Valor: %d\n", resultado);

    return 0;
}