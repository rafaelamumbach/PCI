#include <stdio.h>
/*Um sistema de rastreamento de pacotes utiliza um codigo numerico de 10 digitos, onde os 4o e 5o digitos representam o codigo de localizacao da central de distribuicao. Escreva um programa em linguagem C que leia um numero inteiro de 10 digitos, correspondente ao codigo de rastreamento, e exiba o codigo de localizacao.*/

int main() {
    int d4, d5, codigo;

    printf("Informe o codigo numerico: ");
    scanf("%d", &codigo);  // Exemplo: 1234567891

    
    d4 = (codigo / 1000000) % 10; //1234 % 10 = 4
    d5 = (codigo / 100000) % 10;   //12345 % 10 = 5

    printf("\nCodigo de localizacao: %d%d\n", d4, d5);

    return 0;
}

