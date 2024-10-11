#include <stdio.h>
/*Um sistema de rastreamento de pacotes utiliza um codigo numerico de 10 digitos, onde os 4o e 5o digitos representam o codigo de localizacao da central de distribuicao. Escreva um programa em linguagem C que leia um numero inteiro de 10 digitos, correspondente ao codigo de rastreamento, e exiba o codigo de localizacao.*/

int main() {
    int codigo, resto, d4, d5;

    printf("Informe o codigo numerico: ");
    scanf("%d", &codigo);  // 1234567891

    resto = codigo % 10000000;  // 4567891

    d4 = resto / 1000000;  // d4 = 4567891 / 1000000 = 4
    resto = resto % 1000000;  // resto = 4567891 % 1000000 = 567891

    d5 = resto / 100000;  // d5 = 567891 / 100000 = 5
    
    printf("\nCodigo de localizacao: %d%d\n", d4, d5);
}