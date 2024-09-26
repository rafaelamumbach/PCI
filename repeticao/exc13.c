#include <stdio.h>

int main(){
    int i, nros, soma = 0, cont=0;
    float media = 0;

    printf("Informe 15 nros.\n");
    for (i = 1; i <= 15; i++){
        printf("%d/15: ", i);
        scanf("%d", &nros);

        if(nros % 2 != 0){
            cont++;
            soma = soma + nros;
            media = soma / cont;
        }
    }

    printf("Foram encontrados %d nros impares. A media deles eh: %.2f", cont, media);
}