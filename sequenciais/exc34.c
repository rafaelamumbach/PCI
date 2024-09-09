/*34) (S00001350) Desenvolva um programa que solicite ao usuário um horário (hora, minuto, segundo) no formato de 24 horas (faixa de 00:00:00 a 23:59:59) e mostre na tela o horário correspondente ao segundo seguinte. O programa deve permitir que o usuário informe o horário através de três informações independentes: hora, minuto e segundo. O horário calculado deve ser mostrado na tela no formato de 24 horas.

Exemplo: se o usuário digitar como horário inicial os valores 15 (horas), 59 (minutos) e 49 (segundos), o programa deve mostrar na tela 15 horas 59 minutos e 50 segundos. Para efetuar este cálculo, é necessário:

converter a quantidade de horas e minutos do horário informado para segundos:  15*3600 + 59*60 +49 =  57.589 segundos
somar 1 s quantidade de segundos transcorridos:  57.589 segundos +  1 segundo = 57.590 segundos
transformar o horário total em segundos para horas e minutos, utilizando os operadores de divisão que fornecem a parte inteira do quociente e o resto da divisão:*/

#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int segundos_totais, segundos_novo;
    int nova_hora, novo_minuto, novo_segundo;

    printf("Informe um horario (formato 24hrs): ");
    scanf("%d%d%d", &horas, &minutos, &segundos);

    segundos_totais = horas * 3600 + minutos * 60 + segundos;
    
    segundos_novo = segundos_totais + 1;

    nova_hora = (segundos_novo / 3600) % 24;  
    novo_minuto = (segundos_novo % 3600) / 60;
    novo_segundo = segundos_novo % 60;

    printf("Antigo horario: %d horas %d minutos e %d segundos.\n", horas, minutos, segundos);
    printf("Novo horario: %d horas %d minutos e %d segundos.\n", nova_hora, novo_minuto, novo_segundo);

}
