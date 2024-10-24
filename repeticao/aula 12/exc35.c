#include <stdio.h>

int main(){
    int den=3,i;
    float soma=1;
    printf("100 primeiros termos da Serie sao:\n1 ");
    for (i=1;i<100;i++){
        //printf("+ 1/%d ",den);
        printf("+ %.5f",1/(float)den);
        soma+=1/(float)den;
        den+=2;
    }
    printf("\n\nA soma dos termos eh %.2f\n",soma);
}