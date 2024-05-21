#include <stdio.h>

int main() {
    int n;

    printf("Insira um valor maior ou igual a 2: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("   ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%2d", j);
            if (j < i) {
                printf(" ");
            }
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%3d", j);
            if (j > 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}