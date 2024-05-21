#include <stdio.h>

int main(){
    int lado;

    printf("Informe o lado do retângulo:\n");
    scanf("%d", &lado);

    for(int i = 1; i <= lado; i++){
            printf("\n");
            for(int j = 1; j <= lado; j++){
                if(i == 1 || i == lado || j == 1 || j == lado || i == j){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
    }
    return 0;
}