#include <stdio.h>

int main(){
    int num, i, soma;
    printf("Informe um valor n: ");
    scanf("%d", &num);

    soma = 1 + num;
    for (i = 2; i <= num/2; i++){
        if(num % i == 0){
            soma+=i;
        }
    }

    printf("Soma dos divisores de %d: %d\n", num, soma);
}