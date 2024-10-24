#include <stdio.h>

int main() {
    int dia, mes, ano, dia_semana, bissexto, cont = 0;

    printf("Informe o dia inicial: ");
    scanf("%d", &dia);
    printf("Informe o mes inicial: ");
    scanf("%d", &mes);
    printf("Informe o ano inicial: ");
    scanf("%d", &ano);
    printf("Informe o dia da semana: ");
    scanf("%d", &dia_semana);

    printf("As primeiras 3 sextas-feiras 13 a partir de %d/%d/%d sao:\n", dia, mes, ano);

    while (1) {
        if (dia == 13 && dia_semana == 6) {
            printf("%d/%d/%d\n", dia, mes, ano);
            cont++;
            if (cont == 3) 
                break;
        }

        dia++;
        dia_semana++;

        if (dia_semana == 8) 
            dia_semana = 1;

        if (dia == 32 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)) {
            dia = 1;
            mes++;
        } else if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
            dia = 1;
            mes++;
        } else if (dia == 32 && mes == 12) {
            dia = 1;
            mes = 1;
            ano++;
        } else if (dia == 30 && mes == 2) {
            dia = 1;
            mes = 3;
        } else if (dia == 29 && mes == 2) {
            // verificar se é ano bissexto
            bissexto = 0; // bissexto=0 significa que o ano não é bissexto

            if (ano % 4 == 0) {
                if (ano % 100 == 0) {
                    if (ano % 400 == 0)
                        bissexto = 1;
                } else {
                    bissexto = 1;
                }
            }

            if (bissexto == 0) {
                dia = 1;
                mes = 3;
            }
        }
    }

    return 0;
}
