#include <stdio.h>
/*Calculo de media*/

int main(){
    float nota1, nota2, nota3, media;
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;
    
    printf("Media final: %.2f", media);
}