#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade, soma = 0, cont = 0;
    float media;

    printf("Digite as idades: ");
    scanf("%d", &idade);

    while(idade >= 0){
        soma = soma + idade;
        cont = cont + 1;

        scanf("%d", &idade);
    }

    if(cont == 0){
        printf("IMPOSSÍVEL CALCULAR");
    }else{
        media = soma / cont ;
        printf("MÉDIA = %.2f", media);
    }

    return 0;
}