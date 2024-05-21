#include <stdio.h>
#include <stdlib.h>

int main(){

    int segundos_user, segundos, minutos, horas;


    printf("Digite um número em segundos: ");
    scanf("%d", &segundos_user);

        horas = segundos_user / 3600;
        minutos = (segundos_user % 3600) / 60;
        segundos = ((segundos_user % 3600) % 60);
        printf("%.1d : %.1d : %.1d", horas, minutos, segundos);

    return 0;
}