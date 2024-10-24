#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("Os digitos que formam o numero %d sao:\n",num);
    while (num>0){
        printf("%d ",num%10);
        num/=10;
    }
}