#include <stdio.h>

int main() {
    int largura_central;

    printf("Digite a largura central do losango (Deve ser um número ímpar para que o losango seja simétrico): \n");
    scanf("%d", &largura_central);

    int altura = (largura_central + 1) / 2;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("X");
        }
        printf("\n");
    }

    for (int i = altura - 1; i >= 1; i--) {
        for (int j = 1; j <= altura - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}