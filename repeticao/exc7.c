#include <stdio.h>

int main(){
    int i, num;

    for (i; i; i++){
        printf("Informe um nro (0 p/sair): ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("\nEh par\n");
        }

        if(num == 0){
            break;
        }
    }
}