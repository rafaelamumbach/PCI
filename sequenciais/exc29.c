/*29) Desenvolva um programa que solicite ao usuário digitar um tempo em minutos. Após a digitação, o computador deverá converter este tempo para horas e mostrar esta informação na tela do computador. 

Exemplo: Se o usuário digitar 13.527 minutos, o programa deverá mostrar na tela 225 horas.*/

#include <stdio.h>

int main(){
    int minutos, horas;
    printf("Informe um tempo em minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;

    printf("%d minutos em horas: %d", minutos, horas);
}