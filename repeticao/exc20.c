#include <stdio.h>

int main() {
    float altura, peso;
    float imc;
    float maior_imc = -1.00;
    float altura_imc, peso_imc;
    int i;

    printf("Informe peso e altura (peso em kg e altura em metros):\n");

    for (i = 0; i < 3; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%f %f", &peso, &altura);

        imc = peso / (altura * altura);

        if (imc > maior_imc) {
            maior_imc = imc; 
            peso_imc = peso;
            altura_imc = altura;
        }
    }

    printf("A pessoa de maior IMC (%.2f) mede %.2f metros e pesa %.2f kgs.\n", maior_imc, altura_imc, peso_imc);
    
}
