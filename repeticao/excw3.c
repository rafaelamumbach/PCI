#include <stdio.h>

int main(){
    int numero, i;
    int menor = 100, cont = 0;

    for (i = 0; i < 20; i++){
        printf("Informe um nro (%d)/20: ", i+1);
        scanf("%d", &numero);

        if(numero < menor){
            menor = numero;
            cont = 1; //reinicia o contador se encontrou o menor

            if(numero == menor){
                cont++; //incrementa o contador se o numero atual for igual ao menor 
            }
        }
    }

    printf("O menor nro informado foi %d e apareceu %d vezes.", menor, cont);
}