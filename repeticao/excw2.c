#include <stdio.h>

int main() {
    int codigo, qtdeVotos;
    int maiorCodigo = 0, segundoMaiorCodigo = 0;
    int maiorVotos = 0, segundoMaiorVotos = 0;

    do {
        printf("Digite o codigo do candidato (0 para parar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite a quantidade de votos: ");
        scanf("%d", &qtdeVotos);


        if (qtdeVotos > maiorVotos) {
            
            segundoMaiorVotos = maiorVotos;
            segundoMaiorCodigo = maiorCodigo;

            maiorVotos = qtdeVotos;
            maiorCodigo = codigo;
        } 
        else if (qtdeVotos > segundoMaiorVotos) {
            segundoMaiorVotos = qtdeVotos;
            segundoMaiorCodigo = codigo;
        }

    } while (codigo != 0);

    if (maiorCodigo != 0) {
        printf("1o Lugar: Candidato %d com %d votos.\n", maiorCodigo, maiorVotos);
        if (segundoMaiorCodigo != 0) {
            printf("2o Lugar: Candidato %d com %d votos.\n", segundoMaiorCodigo, segundoMaiorVotos);
        }
    } else {
        printf("Nenhum candidato foi votado.\n");
    }

    return 0;
}
