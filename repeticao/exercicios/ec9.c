#include <stdio.h>

int main() {
    int i, ant, num, maior = 0, menor = 0, igual = 0;
    
    printf("Informe 10 numeros: ");
    scanf("%d", &ant);
    
    for (i = 1; i < 10; i++) {
        scanf("%d", &num);
        if (ant == num) igual++;
        if (ant < num) maior++;
        if (ant > num) menor++;
        ant = num;
    }
    
    if (igual == 9)
        printf("\nTodos os numeros sao iguais!\n");
    else if (maior == 9)
        printf("\nEh uma sequencia estritamente crescente!\n");
    else if (maior + igual == 9)
        printf("\nEh uma sequencia crescente!\n");
    else if (menor == 9)
        printf("\nEh uma sequencia estritamente decrescente!\n");
    else if (menor + igual == 9)
        printf("\nEh uma sequencia decrescente!\n");
    else
        printf("\nEh uma sequencia desordenada!\n");
}
