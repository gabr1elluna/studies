#include <stdio.h>
#include <stdlib.h>

int main(){

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    //Novamente, para evitar erros, na hora de ler os caracteres, deve-se botar um espaço entre os %c
    //Espaço entre os %c -> Comando para o computador desconsiderar o ENTER, o TAB e o SPACEBAR

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}