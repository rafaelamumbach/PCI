#include <stdio.h>

int main(){
    int i, n;
    
    printf("Informe um nro int n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}