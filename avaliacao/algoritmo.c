#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    int peso1 = 1, peso2 = 2, peso3 = 3;
    
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (peso1 + peso2 + peso3) / ((peso1 / nota1) + (peso2 / nota2) + (peso3 / nota3));
    
    printf("Media final: %.2f\n", media);

}
