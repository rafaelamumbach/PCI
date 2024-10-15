#include <stdio.h>

int main(){
    int num, i;
    printf("Informe um valor n: ");
    scanf("%d", &num);

    printf("Divisores de %d:\n1\n", num);
    for (i = 2; i <= num/2; i++){
        if(num % i == 0){
            printf("%d\n", i);
        }
    }

    printf("%d", num);
}