#include <stdio.h>
#include <math.h>

int main() {
    int i, num, fat = 1, x, nterm;
    float soma = 0.0;

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    
    printf("Informe o numero de termos: ");
    scanf("%d", &nterm);
    
    printf("Serie:\n");
    
    for (i = 1; i <= nterm; i++) {
        num = pow(x, i + 1);
        fat *= i;           

        
        if (i % 2 == 1) {
            soma -= (float)num / fat;
            printf("- %d/%d ", num, fat);
        } else {
            soma += (float)num / fat;
            printf("+ %d/%d ", num, fat);
        }
    }

    printf("\n\nResultado da serie = %.3f\n", soma);

}
