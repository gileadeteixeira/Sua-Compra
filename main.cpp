#include <stdio.h>
#include <stdlib.h>
int main()
{
	float P, VP, Vp;
	int CP, TP;
	//P=preço do produto; VP=Valor a pagar; Vp=Valor das parçelas; CP=condição de pagamento; TP=Tipo de Pagamento//
	inicio:
	printf("Informe o preco do produto\n(Favor utilizar . como virgula, se for necessario): ");
	scanf("%f", &P);
	printf("\nInforme a condicao de pagamento\n(1-VISTA ou 2-DUASVEZES): ");
	scanf("%d", &CP);
	switch(CP)
		{
			case 1:
				printf("\nInforme o tipo de pagamento\n(1-DINHEIRO, 2-CHEQUE ou 3-CARTAO): ");
				scanf("%d", &TP);
				switch (TP)
					{
						case 1:
							VP = P - (P/10);
							printf("\nValor Original: %2.2f\nValor A Pagar: %2.2f\n", P, VP);
							printf("\nCondicoes:\nPagamento a Vista, em Dinheiro ou Cheque, = 10 p/c de desconto;\nPagamento a Vista, no Cartao, = 15 p/c de desconto;\nPagamento em Duas Vezes, Sem Juros, = Sem Desconto.\n");
							
						break;
						case 2:
							VP = P - (P/10);
							printf("\nValor Original: %2.2f\nValor A Pagar: %2.2f\n", P, VP);
							printf("\nCondicoes:\nPagamento a Vista, em Dinheiro ou Cheque, = 10 p/c de desconto;\nPagamento a Vista, no Cartao, = 15 p/c de desconto;\nPagamento em Duas Vezes, Sem Juros, = Sem Desconto.\n");
							
						break;
						case 3:
							VP = P - ((15*P)/100);
							printf("\nValor Original: %2.2f\nValor A Pagar: %2.2f\n", P, VP);
							printf("\nCondicoes:\nPagamento a Vista, em Dinheiro ou Cheque, = 10 p/c de desconto;\nPagamento a Vista, no Cartao, = 15 p/c de desconto;\nPagamento em Duas Vezes, Sem Juros, = Sem Desconto.\n");
							
						break;
						default:
							printf("\nOpcao invalida\n");
							
					}
			break;	
			case 2:
				printf("\nInforme o tipo de pagamento\n(1-SEMJUROS ou 2-DEZJUROS): ");
				scanf("%d", &TP);
				switch (TP)
					{
						case 1:
							VP = P;
							Vp = P/2;
							printf("\nValor Original: %2.2f\nValor A Pagar: %2.2f\nValor de Cada Parcela: %2.2f\n", P, VP, Vp);
							printf("Condicoes:\nPagamento a Vista, em Dinheiro ou Cheque, = 10 p/c de desconto;\nPagamento a Vista, no Cartao, = 15 p/c de desconto;\nPagamento em Duas Vezes, Sem Juros, = Sem Desconto.\n");
							
						break;
						case 2:
							VP = P + (P/10);
							printf("\nValor Original: %2.2f\nValor A Pagar: %2.2f\n", P, VP);
							printf("Condicoes:\nPagamento a Vista, em Dinheiro ou Cheque, = 10 p/c de desconto;\nPagamento a Vista, no Cartao, = 15 p/c de desconto;\nPagamento em Duas Vezes, Sem Juros, = Sem Desconto.\n");
							
						break;
						default:
							printf("\nOpcao invalida\n");
					}
			break;
			default:
				printf("\nOpcao invalida. Por favor, informe os dados novamente.\n");
		}
	system("pause");
	system("cls");
	goto inicio;
}