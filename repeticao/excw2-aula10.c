#include <stdio.h>
/*2) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro N. O programa em C
deverá mostrar na tela a quantidade de divisores que o valor informado possui.
Exemplo: se o usuário digitar o número 21, o programa em C deverá mostrar na tela uma
mensagem que o número 21 tem 4 divisores*/

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