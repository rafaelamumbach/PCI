#include <stdio.h>

int main() {
    int posicao = 2;
    int posicao_mais_proxima = 2;
    float diferenca_anterior, diferenca_atual, menor_diferenca;

    printf("Digite a diferenca de tempo em relacao ao lider para o competidor 2 (negativo para encerrar): ");
    scanf("%f", &diferenca_anterior);

    if (diferenca_anterior < 0) {
        printf("Nenhum competidor foi inserido.\n");
        return 0;
    }

    menor_diferenca = -1;

    while (1) {
        printf("Digite a diferenca de tempo em relacao ao lider para o competidor %d (negativo para encerrar): ", posicao + 1);
        scanf("%f", &diferenca_atual);

        if (diferenca_atual < 0) {
            break;
        }

        float diferenca = diferenca_atual - diferenca_anterior;

        if (menor_diferenca == -1 || diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
            posicao_mais_proxima = posicao + 1;
        }

        diferenca_anterior = diferenca_atual;
        posicao++;
    }

    if (menor_diferenca != -1) {
        printf("Resultado: %d\n", posicao_mais_proxima);
        printf("Diferenca mais proxima: %.2f segundos\n", menor_diferenca);
    } else {
        printf("Nao foi possivel calcular a diferenca mais proxima.\n");
    }

}
