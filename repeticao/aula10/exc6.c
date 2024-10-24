#include <stdio.h>

int main(){
    int num,i,cont,j;

    for (j=1;j<=10;j++){
        cont=0;
        printf("Digite um numero (%d/10): \n", j);
        scanf("%d",&num);

        for (i=2;i<=num/2;i++){
        if (num%i==0){
        cont++;
        break;
        }
    }

        if (cont==0)
        printf ("%d eh um numero primo\n",num);

    }
}