#include <stdio.h>
#include <stdlib.h>

int main(){

    char sexo;
    int idade;
    float peso, altura;

    /*printf("Digite seu sexo (f, F, m ou M), idade, peso (em kg) e altura (em m): \n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    printf("Informações lidas:\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
    */

    printf("Digite sua idade, peso (em kg), altura (em m) e sexo (f, F, m ou M): \n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    /*
    \n == Enter do teclado
    Buffer do teclado => 45\n56.2\n1.63\n
    No buffer do teclado, durante a execução desse programa, analisa informação por informação até identificar a informação certa
    Exemplo: 45(Inteiro)\n(Não é inteiro)56.2(Flutuante ou Real)\n(Não é nem flutuante nem real)1.63(Flutuante ou Real)\n(Nesse caso, \n é considerado um caractere, visto que o usuário utilizou do botão Enter do teclado para pular a linha) 
    Para solucionar, vamos colocar um espaço antes do %c na linha 17
    Ou seja, antes desse caractere, se tiver um espaço ou um tab, ele não irá considerá-lo
    */
    
    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);


    return 0;
}