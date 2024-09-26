#include <stdio.h>

int main() {
    int i;
    int curso, idade;
    int cont1 = 0, cont2 = 0, cont3 = 0;
    int contIdade = 0; 
    int soma1 = 0, soma2 = 0, soma3 = 0;
    int menorCurso = 1;
    float media1 = 0, media2 = 0, media3 = 0, menorMedia; 

    for (i = 1; i <= 15; i++) {
        printf("[ALUNO %d/15]\n", i);

        printf("Codigo do curso: ");
        scanf("%d", &curso);

        printf("Idade: ");
        scanf("%d", &idade);

        if (curso == 1) {
            cont1++;
            soma1 += idade;
        } else if (curso == 2) {
            cont2++;
            soma2 += idade;
        } else if (curso == 3) {
            cont3++;
            soma3 += idade;
        }

        if (idade >= 20 && idade <= 25) {
            contIdade++;
        }
    }

    if (cont1 > 0) {
        media1 = (float) soma1 / cont1;
    }
    if (cont2 > 0) {
        media2 = (float) soma2 / cont2;
    }
    if (cont3 > 0) {
        media3 = (float) soma3 / cont3;
    }

    menorMedia = media1;
    menorCurso = 1;

    
    if (cont2 > 0 && media2 < menorMedia) {
        menorMedia = media2;
        menorCurso = 2;
    }
    if (cont3 > 0 && media3 < menorMedia) {
        menorMedia = media3;
        menorCurso = 3;
    }

    printf("Alunos matriculados em ENGENHARIA: %d\n", cont1);
    printf("Alunos matriculados em COMPUTACAO: %d\n", cont2);
    printf("Alunos matriculados em ADMINISTRACAO: %d\n", cont3);
    printf("Alunos com IDADE entre 20 e 25 anos: %d\n", contIdade);
    printf("Codigo do curso com a menor media de idade: %d\n", menorCurso);

}
