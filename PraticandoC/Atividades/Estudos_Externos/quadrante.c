#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;

    printf("Insira o valor das coordenadas X e Y: ");
    scanf("%d %d", &x, &y);

    while(x != 0 && y != 0){
        if(x > 0 && y > 0){
            printf("QUADRANTE Q1\n");
        }
        else if (x < 0 && y > 0){
            printf("QUADRANTE Q2\n");
        }
        else if (x < 0 && y < 0){
            printf("QUADRANTE Q3\n");
        }
        else if (x > 0 && y < 0){
            printf("QUADRANTE Q4\n");
        }
        printf("Digite os valores das coordenadas X e Y: ");
        scanf("%d %d", &x, &y);
    }

    return 0;
}