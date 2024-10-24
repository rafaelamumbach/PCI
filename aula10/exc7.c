#include <stdio.h>

int main() {
    int num, i, cont, qtd = 0, vezes;

    printf("Informe a quantidade de numeros primos a partir de 2: ");
    scanf("%d", &vezes);

    printf("\nOs numeros sao:\n");
    num = 1;

    while (qtd < vezes) {
        cont = 0;
        num++;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                cont++;
                break;
            }
        }

        if (cont == 0) {
            printf("%d  ", num);
            qtd++;
        }
    }
}
