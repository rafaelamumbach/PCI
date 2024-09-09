/*21) O módulo ou valor absoluto de um número é a distância de um ponto da reta à origem ( distância do ponto até o zero). Assim, a distância do ponto 5 à origem é 5. A distância do ponto -3 à origem é 3, pois não há sentido em representar distâncias negativas. Então o módulo de -3 é 3. A representação dos módulos é a seguinte:

|5| = 5

|-3| = 3

Desenvolva um programa que solicite ao usuário informar dois valores inteiros. O programa deverá calcular a diferença do primeiro pelo segundo número e após mostrar na tela o módulo desta diferença, isto é, |valor1-valor2|.

Observação: Na linguagem de programação C, a função a ser utilizada no cálculo do módulo é abs() para números inteiros e fabs() para números reais. Estas funções estão presentes na bilbioteca math.*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    int modulo;

    printf("Informe dois nros: ");
    scanf("%d%d", &a, &b);

    modulo = abs(a - b);

    printf("Modulo de %d - %d eh: %d", a, b, modulo);
}