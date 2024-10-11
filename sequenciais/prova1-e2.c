#include <stdio.h>
/*Uma plataforma de vendas de ingressos oferece descontos dependendo da quantidade de ingressos adquiridos e da forma de pagamento escolhida. Desenvolva um programa em C que solicite o codigo do evento, a quantidade de ingressos e a condicao de pagamento. O programa deve calcular e mostrar o valor final da compra, aplicando um desconto adicional de 7% se forem comprados mais de 4 ingressos. Caso seja inserido um codigo invalido de evento ou condicao de pagamento, o programa deve exibir uma mensagem de erro e considerar o valor da compra como zero.
Tabela de precos
1- Codigos evento
    1 | Show de Musica = R$200,00
    2 | Peca de Teatro = R$150,00
    3 | Conferencia de Tecnologia = R$300,00
    4 | Festival de Cinema = R$180,00

2- Pagamento
    1 | A vista = DESCONTO 10%
    2 | 30 dias = DESCONTO 5%
    3 | 60 dias = ACRESCIMO 10%

*/

int main() {
    int codigo_evento, cond_pgto, qtd;
    float valor=0, total=0;

	printf("Digite o codigo do evento:\n");
	scanf("%d",&codigo_evento);

	printf("Digite a condicao de pagamento:\n");
	scanf("%d",&cond_pgto);

	printf("Digite a quantidade de ingressos:\n");
	scanf("%d",&qtd);

	if (codigo_evento == 1){
		valor = 200;
    }
	if (codigo_evento == 2){
		valor = 150;
    }
	if (codigo_evento == 3){
		valor = 300;
    }
	if (codigo_evento == 4){
		valor = 180;
    }
	if (valor>0){
		if (cond_pgto >= 1 && cond_pgto <= 3){
			total = qtd * valor;
			if (cond_pgto == 1){
				total = total - (total * 0.10);
            }
			if (cond_pgto == 2){
				total = total - (total * 0.05);
            }
			if (cond_pgto == 3){
				total = total + (total * 0.10);
            }
			if (qtd>4){
                printf("+ desconto por qtde.\n");
                total = total - (total * 0.07);
            }
			printf("\nValor total: %.2f: \n", total);
		}
        else {
			printf("\nCodigo de pagamento invalido!\n");
		}
	}
    else {
		printf("\nCodigo do evento invalido!\n");
    }
			
}