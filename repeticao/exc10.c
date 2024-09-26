#include <stdio.h>

int main(){
    int nros, i;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;

    printf("Informe 15 nros inteiros.\n");
    for (i = 1; i <= 15; i++){
        printf("%d/15: ", i);
        scanf("%d", &nros);

        if(nros > 0 && nros <= 25){
            cont1++;
        } else if(nros > 25 && nros <= 50){
            cont2++;
        } else if(nros > 50 && nros <= 75){
            cont3++;
        } else if(nros > 75 && nros <= 100){
            cont4++;
        }
    }

    printf("Foram encontrados:\n");
    printf("%d nros no intervalo [0,25].\n ", cont1);
    printf("%d nros no intervalo (25,50].\n ", cont2);
    printf("%d nros no intervalo (50,75].\n ", cont3);
    printf("%d nros no intervalo (75,100].\n ", cont4);
}