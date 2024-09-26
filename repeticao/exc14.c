#include <stdio.h>

int main(){
    int i, multiplicando, multiplicador, multiplicacao;
    printf("Informe o multiplicando e o multiplicador: ");
    scanf("%d%d", &multiplicando, &multiplicador);

    for (i = 1; i <= multiplicador; i++){
        multiplicacao = multiplicacao + multiplicando;
    }

    printf("%d x %d eh: %d", multiplicando, multiplicador, multiplicacao);
}