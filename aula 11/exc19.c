#include <stdio.h>

int main(){
    int num,q0=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0;
    printf("Digite um numero: ");
    scanf("%d",&num);

    while (num>0){
        switch(num%10){
            case 0: q0++;
            break;
            case 1: q1++;
            break;
            case 2: q2++;
            break;
            case 3: q3++;
            break;
            case 4: q4++;
            break;
            case 5: q5++;
            break;
            case 6: q6++;
            break;
            case 7: q7++;
            break;
            case 8: q8++;
            break;
            case 9: q9++;
            break;
        }
        num/=10;
    }
    
    if (q0>0) printf("Foram digitados %d digitos 0\n",q0);
    if (q1>0) printf("Foram digitados %d digitos 1\n",q1);
    if (q2>0) printf("Foram digitados %d digitos 2\n",q2);
    if (q3>0) printf("Foram digitados %d digitos 3\n",q3);
    if (q4>0) printf("Foram digitados %d digitos 4\n",q4);
    if (q5>0) printf("Foram digitados %d digitos 5\n",q5);
    if (q6>0) printf("Foram digitados %d digitos 6\n",q6);
    if (q7>0) printf("Foram digitados %d digitos 7\n",q7);
    if (q8>0) printf("Foram digitados %d digitos 8\n",q8);
    if (q9>0) printf("Foram digitados %d digitos 9\n",q9);
}