#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    float x, s;

    printf("Informe N: ");
    scanf("%d", &n);

    printf("Informe X: ");
    scanf("%f", &x);

    for (i = 0; i < n; i++){
        s += 1.0 / pow(x, i);
    }

    printf("S = %.4f", s);
}