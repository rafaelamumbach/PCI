#include <stdio.h>

int main() {
    int den = 3, i, x;
    float soma;

    printf("Informe o valor x: ");
    scanf("%d", &x);

    printf("\n\nOs 100 primeiros termos da série são:\n");
    soma = (float)x;
    printf("%d/1", x);

    // Primeiro for mostrando numerador/denominador
    for (i = 1; i < 100; i++) {
        printf(" + %d/%d", x, den);
        soma += x / (float)den;
        den += 2;
    }

    printf("\n\nOs 100 primeiros termos da série com a divisão são:\n");
    den = 3;
    printf("%.2f", (float)x);

    // Segundo for mostrando a divisão do numerador/denominador
    for (i = 1; i < 100; i++) {
        printf(" + %.5f", x / (float)den);
        den += 2;
    }

    printf("\n\nA soma dos termos é: %.2f\n", soma);

}
