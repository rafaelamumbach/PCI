#include <stdio.h>

int main() {
    int p1 = 2, p2 = 3, p3 = 5, divi, i, j, cont = 0, num;

    printf("Digite um numero inicial: ");
    scanf("%d", &num);

    while (1) {
        if (p1 + p2 + p3 >= num) {
            printf("%d + %d + %d = %d\n", p1, p2, p3, p1 + p2 + p3);
            cont++;
            if (cont == 10)
                break;
        }

        p1 = p2;
        p2 = p3;
        divi = 1;

        while (divi == 1) {
            p3++;
            divi = 0;
            for (j = 2; j <= p3 / 2; j++) {
                if (p3 % j == 0) {
                    divi = 1;
                    break;
                }
            }
        }
    }
}
