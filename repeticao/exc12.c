#include <stdio.h>

int main(){
    int i, nros, soma = 0;

    printf("Informe 15 nros.\n");
    for (i = 1; i <= 15; i++){
        printf("%d/15: ", i);
        scanf("%d", &nros);

        if(nros % 2 == 0){
            soma = soma + nros;
        }
    }

    printf("Soma total dos nros pares: %d", soma);
}