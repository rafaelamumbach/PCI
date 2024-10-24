#include <stdio.h>

int main(){
    long int n1=0,n2=1,soma;
    int i;
    printf("100 primeiros termos da Serie de Fibonacci:\n0  1  ");
    for (i=1;i<=98;i++){
        soma=n1+n2;
        printf("%ld  ",soma);
        n1=n2;
        n2=soma;
    }
}