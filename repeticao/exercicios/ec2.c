#include <stdio.h>

int main() {
    int i, primo;
    long int n1 = 0, n2 = 1, soma;

    printf("20 primeiros termos primos:\n");

    for (i = 0; i < 20; i++) {
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;

        primo = 1;
        if (soma < 2) primo = 0;
        
        for (int j = 2; j * j <= soma; j++) {
            if (soma % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("%ld ", soma);
        }
    }
}

