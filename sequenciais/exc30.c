/*30) Desenvolva um programa que solicite ao usuário digitar um tempo em segundos. Após a digitação, o computador deverá converter este tempo para horas e mostrar esta informação na tela do computador. 

Exemplo: para transformar a quantidade total de minutos em horas, deve-se utilizar o operador de divisão que fornece a parte inteira do quociente. Se o usuário digitar 15.987 segundos, o programa deverá mostrar na tela 4 horas.*/

#include <stdio.h>

int main(){
    int segundos, horas;
    printf("Informe um tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;

    printf("%d minutos em horas: %d", segundos, horas);
}