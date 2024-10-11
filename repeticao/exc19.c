#include <stdio.h>

int main() {
    float altura, peso;
    float mais_alto = -1.00;
    float peso_mais_alto = 0.00;
    int i;

    printf("Informe peso e altura (peso em kg e altura em metros):\n");

    for (i = 0; i < 3; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%f %f", &peso, &altura);

        if (altura > mais_alto) {
            mais_alto = altura; 
            peso_mais_alto = peso;
        }
    }

    printf("A pessoa mais alta mede %.2f metros e pesa %.2f kgs.\n", mais_alto, peso_mais_alto);
    
}
