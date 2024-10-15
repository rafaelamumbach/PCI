#include <stdio.h>

int main(){
    int num, i, cont;
    printf("Informe um valor n: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }

    if(cont==2){
        printf("%d eh primo.", num);
    } else {
        printf("%d nao eh primo.", num);
    }

}