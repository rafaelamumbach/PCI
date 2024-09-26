#include <stdio.h>

int main(){
    int i, num;

    for (i = 1; i <= 10; i++){
        printf("Informe o %do nro: ", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("\nEh par\n");
        }
    }
}