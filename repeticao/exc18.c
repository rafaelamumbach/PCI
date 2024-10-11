#include <stdio.h>

int main() {
    int valor, i, menor=100, maior= -100;
    printf("Informe 10 valores inteiros\n");

    for (i = 0; i < 10; i++) {
        printf("%d/10: ", i + 1);
        scanf("%d", &valor);

        if (valor < menor){
            menor = valor;
        } 

        if(valor > maior){
            maior = valor;
        }
    }

    printf("Menor valor: %d\nMaior valor: %d", menor, maior);
}