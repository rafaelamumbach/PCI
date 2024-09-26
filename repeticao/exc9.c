#include <stdio.h>

int main(){
    int nros, i;
    int cont = 0;

    printf("Informe 15 nros inteiros.\n");
    for (i = 1; i <= 15; i++){
        printf("%d/15: ", i);
        scanf("%d", &nros);

        if(nros >= 10 && nros <= 20){
            cont++;
        }
    }

    printf("Foram encontrados %d nros no intervalo [10,20]. ", cont);
}