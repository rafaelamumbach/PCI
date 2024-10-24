#include <stdio.h>
int main(){
    int num, novo_num=0, mult=1, d;

    printf("Digite um numero: ");
    scanf("%d",&num);

    while (num>0){
        d=num%10;
        if (d%2==0){
            novo_num+=d*mult;
            mult*=10;
        }
        num/=10;
    }
    
    if (novo_num==0)
        printf("O numero so possui digitos impares\n");
    else
        printf("O novo numero eh %d\n",novo_num);
}