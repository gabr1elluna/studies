#include <stdio.h>

int main(){
    int tamanho, tipo;

    printf("Informe o tamanho do retângulo (altura): \n");
    scanf("%d", &tamanho);
    printf("Escolha como ficará o retângulo\n1 - Preenchido\t2 - Vazado\n");
    scanf("%d", &tipo);

    if(tipo == 1){
        for(int i = 0; i < tamanho; i++){
            printf("\n");
            for(int j = 0; j < tamanho; j++){
                printf("* ");
            }
        }
    }else if(tipo == 2){
        for(int i = 0; i < tamanho; i++){
            printf("\n");
            for(int j = 0; j < tamanho; j++){
                if(i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
    }
    return 0;
}