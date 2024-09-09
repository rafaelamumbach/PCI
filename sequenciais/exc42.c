/*42) (S00001000) Desenvolva um programa que solicite ao usuário um número de até cinco dígitos. O programa deve calcular e mostrar na tela a soma dos dígitos do número digitado. 

Exemplo: Se o usuário informar o valor de 1325, o programa deverá mostrar na tela o valor 11, isto é 1+3+2+5. Para desenvolver este programa, utilizar os operadores de divisão e o resto da divisão:*/

#include <stdio.h>

int main(){
    int nro;
    int d1, d2, d3, d4, d5, resto;

    printf("Informe um nro de ate 5 digitos: ");
    scanf("%d", &nro);

    d1 = nro / 10000;
    resto = nro % 10000;
    d2 = resto / 1000;
    resto = resto % 1000;
    d3 = resto / 100;
    resto = resto % 100;
    d4 = resto / 10;
    d5 = resto % 10;

    printf("Soma dos nros: %d", d1+d2+d3+d4+d5);
}

// fazer: 34 ao 44; rever exercício 34.