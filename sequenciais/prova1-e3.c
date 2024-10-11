#include <stdio.h>
/* Desenvolva um programa em C que solicite ao usuario informar tres horarios disponiveis, horas e minutos. O programa deve entao ordenar esses horarios em ordem decrescente e exibi-los ao final. Por exemplo, se os horarios lidos forem 9:15, 9:30 e 9:01, o programa devera escrever ao final: 
9:30, 9:15, 09:01
*/

int main() {
    int hora1, minuto1, hora2, minuto2, hora3, minuto3, aux;
    printf("Informe tres horarios. Formato (hh:mm)\n");

    printf("Hora/minuto 1: ");
    scanf("%d", &hora1);
    scanf("%d", &minuto1);

    printf("Hora/minuto 2: ");
    scanf("%d", &hora2);
    scanf("%d", &minuto2);

    printf("Hora/minuto 3: ");
    scanf("%d", &hora3);
    scanf("%d", &minuto3);

    //transformar tudo em minuto
    hora1 = hora1 * 60 + minuto1;
    hora2 = hora2 * 60 + minuto2;
    hora3 = hora3 * 60 + minuto3;

    if(hora1 < hora2){
        aux = hora1;
        hora1 = hora2;
        hora2 = aux;

        aux = minuto1;
        minuto1 = minuto2;
        minuto2 = aux;
    }

    if(hora1 < hora3){
        aux = hora1;
        hora1 = hora3;
        hora3 = aux;
        
        aux = minuto1;
        minuto1 = minuto3;
        minuto3 = aux;
    }

    if(hora2 < hora3){
        aux = hora2;
        hora2 = hora3;
        hora3 = aux;
        
        aux = minuto2;
        minuto2 = minuto3;
        minuto3 = aux;
    }

    //transformar tudo em hora novamente
    minuto1 = hora1 % 60;
	hora1 = hora1 / 60;

	minuto2 = hora2 % 60;
	hora2 = hora2 / 60;

	minuto3 = hora3 % 60;
	hora3 = hora3 / 60;

    printf("\nHorarios em ordem decrescente: %d:%d, %d:%d, %d:%d\n",hora1, minuto1, hora2, minuto2, hora3, minuto3);
}