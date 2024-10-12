#include <stdio.h>

int main(){
    int valores;
    valores = 1;
    int menor = 100;

    while (valores != 0){
        printf("Informe um nro (0 p/ parar): ");
        scanf("%d", &valores);

        if(valores > 0){
            if(valores < menor){
                menor = valores;
            }
        }
    }

    printf("Menor nro informado: %d", menor);
}