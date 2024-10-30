#include <stdio.h>

int main() {
    int num, i, j, somaDiv;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do nro inteiro positivo: ", i+1);
        scanf("%d", &num);

        somaDiv = 0;
        for (j = 1; j <= num / 2; j++) {
            if (num % j == 0) {
                somaDiv += j;
            }
        }

        if (somaDiv > num) {
            printf("%d eh um nro ABUNDANTE.\n", num);
        } else {
            printf("%d NAO EH um nro abundante.\n", num);
        }
    }
}

