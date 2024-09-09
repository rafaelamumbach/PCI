/*4) Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o computador deverá executar a divisão destes números e mostrar o resultado na tela do computador.

Exemplo: se o usuário digitar os valores 522 e 12, o programa deve realizar a divisão destes números e mostrar na tela o resultado (43,5).
Lembre que apesar dos números informados pelo usuário serem inteiros, o resultado da divisão pode resultar em um número real, portanto pense como as variáveis serão declaradas.*/

#include <stdio.h>

int main(){
    int a, b;
    float div, resto;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    div = a / b;
    resto = a % b;

    printf("A divisao dos nros eh: %.2f\nResto: %.2f\n", div, resto);
    
}