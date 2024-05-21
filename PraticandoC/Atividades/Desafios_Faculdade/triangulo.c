#include <stdio.h>

int main(){
    int altura, vazadoOuPreenchido;

    printf("Informe a altura do triângulo: \n");
    scanf("%d", &altura);
    printf("Escolha como ficará o triângulo\n1 - Preenchido\t2 - Vazado\n");
    scanf("%d", &vazadoOuPreenchido);
    if(vazadoOuPreenchido == 1){
        for(int i = 1; i <= altura; i++){
            printf("\n");
            for(int j = 1; j <= i; j++){
                printf("* ");
            }
        }
    }else if(vazadoOuPreenchido == 2){
        for(int i = 1; i <= altura; i++){
            if(i == altura || i == 1){
                for(int j = 1; j <= i; j++){
                    printf("* ");
                }
            }else{
                printf("* ");
                for(int j = 1; j <= i - 2; j++){
                    printf("  ");
                }
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}