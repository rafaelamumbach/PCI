#include <stdio.h>

int main(){
    int i, n, val;
    printf("Informe um nro N(nro de valores a serem informados): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("Informe o %d/%d nro: ", i, n);
        scanf("%d", &val);

        if(val % 2 != 0){
            printf("\nEh impar\n");
        }
    }
}