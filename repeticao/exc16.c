#include <stdio.h>

int main(){
    int i, num, fat = 1;

    printf("Informe um nro n!: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        fat = fat * i;
    }

    printf("Fatorial de %d eh: %d", num, fat);
}