#include <stdio.h>

int main() {
    int i, termo = 1, x;
    float soma = 0;
    printf("Informe x: ");
    scanf("%d", &x);
    
    printf("100 primeiros termos da serie %d/1 +", x);
    
    soma = (float)x;

    for (i = 1; i < 100; i++) {
        termo += 2;
        printf(" %d/%d +", x, termo);
        soma += (float)x / termo;
    }

    printf("\nSoma: %.6f\n", soma);
}
