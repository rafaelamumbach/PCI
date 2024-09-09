/*3) Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o computador deverá executar a multiplicação destes números e mostrar o resultado na tela do computador.

Exemplo: se o usuário digitar os valores 11 e 13, o programa deve realizar a multiplicação destes números e mostrar na tela o resultado (143).*/

#include <stdio.h>

int main(){
    int a, b, mult;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    mult = a * b;

    printf("A multiplicacao dos nros eh: %d", mult);
}