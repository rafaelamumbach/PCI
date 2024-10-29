#include <stdio.h>

int main() {
    int i, termo = 1, soma=0;

    printf("100 primeiros termos da sequencia: %d", termo);
    soma += termo;

    for (i = 1; i < 100; i++){
        termo += 2;
        soma += termo;
        printf(", %d", termo);
    }

    printf("\nSoma: %d", soma);
}
