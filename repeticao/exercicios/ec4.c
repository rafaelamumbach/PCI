#include <stdio.h>

int main(){
    int i, termo = 1;
    int soma = 1;
    printf("100 primeiros termos da serie 1/1 +");

    for (i = 1; i < 100; i++){
        termo += 2;
        printf(" 1/%d + ", termo);
        soma += termo;
    }

    printf("Soma: %d", soma);
}