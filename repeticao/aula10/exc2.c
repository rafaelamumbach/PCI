#include <stdio.h>

int main(){
    int num, i, cont=2;
    printf("Informe um valor n: ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; i++){
        if(num % i == 0){
            cont++;
        }
    }

    printf("Quantidade de divisores de %d: %d\n", num, cont);
}