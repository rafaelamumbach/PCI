#include <stdio.h>
#include <float.h>  // Para usar a constante FLT_MAX

int main() {
    float diferenca, menor_diferenca = FLT_MAX;
    int posicao, posicao_mais_proxima = 0;
    float diferenca_anterior = 0.0;

    // Leitura da primeira diferença
    printf("Digite a diferença de tempo (segundos) em relação ao líder (negativo para encerrar): ");
    scanf("%f", &diferenca);

    posicao = 2;  // A primeira posição a ser comparada é a do competidor 2

    while (diferenca >= 0) {
        if (posicao > 2) {  // Só faz a comparação a partir do competidor 3 em diante
            float diferenca_atual = diferenca - diferenca_anterior;
            if (diferenca_atual < menor_diferenca) {
                menor_diferenca = diferenca_atual;
                posicao_mais_proxima = posicao - 1;  // Guarda a posição anterior, que está mais próxima
            }
        }

        diferenca_anterior = diferenca;

        // Leitura da próxima diferença
        printf("Digite a diferença de tempo (segundos) em relação ao líder (negativo para encerrar): ");
        scanf("%f", &diferenca);

        posicao++;
    }

    printf("Resultado: %d\n", posicao_mais_proxima);

    return 0;
}
