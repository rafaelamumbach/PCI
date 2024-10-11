#include <stdio.h>

int main() {
    int valor, i, j, fat;
    printf("Informe 10 valores menores que 20\n");

    for (i = 0; i < 10; i++) {
        printf("%d/10: ", i + 1);
        scanf("%d", &valor);

        if (valor < 20) {
            fat = 1;
            
            for (j = 1; j <= valor; j++) {
                fat *= j; 
            }

            printf("O fatorial de %d eh %d.\n", valor, fat);

        }
        else {
            printf("Valor deve ser menor que 20.\n");
            i--;
        }
    }
}
