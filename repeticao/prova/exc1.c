#include <stdio.h>
#include <float.h>

int main() {
    float diferenca, menor_diferenca = FLT_MAX;
    int posicao, posicao_mais_proxima = 0;
    float diferenca_anterior = 0.0;

    
    printf("Digite a diferenca de tempo (seg) em relacao ao lider (negativo para encerrar): ");
    scanf("%f", &diferenca);

    posicao = 2;

    while (diferenca >= 0) {
        if (posicao > 2) {
            float diferenca_atual = diferenca - diferenca_anterior;
            if (diferenca_atual < menor_diferenca) {
                menor_diferenca = diferenca_atual;
                posicao_mais_proxima = posicao - 1;
            }
        }

        diferenca_anterior = diferenca;
        printf("Digite a diferença de tempo (segundos) em relação ao líder (negativo para encerrar): ");
        scanf("%f", &diferenca);

        posicao++;
    }

    printf("Resultado: %d\n", posicao_mais_proxima);

    return 0;
}
