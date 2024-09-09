/*31) Desenvolva um programa que solicite ao usuário digitar um tempo em segundos. Após a digitação, o computador deverá converter este tempo para horas e minutos e mostrar esta informação na tela do computador. 

Exemplo: para transformar a quantidade total de segundos em horas e minutos, deve-se utilizar os operadores de divisão que fornecem a parte inteira do quociente e o resto da divisão. Se o usuário digitar 15.987 segundos, o programa deverá mostrar na tela 4 horas e 26 minutos.*/

#include <stdio.h>

int main(){
    int segundos, horas, minutos, resto;
    printf("Informe um tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;

    printf("%d segundos sao %dh%dm.", segundos, horas, minutos);
}