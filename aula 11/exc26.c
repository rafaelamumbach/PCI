#include <stdio.h>

int main() {
    int dia, mes, ano, diaf, mesf, anof, bissexto;

    printf("Informe o dia inicial: ");
    scanf("%d", &dia);

    printf("Informe o mes inicial: ");
    scanf("%d", &mes);

    printf("Informe o ano inicial: ");
    scanf("%d", &ano);

    printf("Informe o dia final: ");
    scanf("%d", &diaf);

    printf("Informe o mes final: ");
    scanf("%d", &mesf);

    printf("Informe o ano final: ");
    scanf("%d", &anof);

    printf("Datas entre %d/%d/%d e %d/%d/%d:\n", dia, mes, ano, diaf, mesf, anof);

    while (1) {
        printf("%d/%d/%d\n", dia, mes, ano);
        if (dia == diaf && mes == mesf && ano == anof)
            break;

        dia++;

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
