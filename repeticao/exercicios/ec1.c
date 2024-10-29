#include <stdio.h>

int main(){
    int i;
    long int n1 = 0, n2 = 1, soma;
    printf("100 primeiros termos de fibonacci: 0 1 ");

    for (i = 0; i <= 98; i++){
        soma = n1 + n2;
        printf("%ld ", soma);
        n1 = n2;
        n2 = soma;
    }
}