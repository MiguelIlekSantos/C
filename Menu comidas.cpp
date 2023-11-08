#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int pedido()
{
	
	int opcao;
	
	printf("\n\nCardápio\n");
	printf("\n100 - Cachorro quente\tR$ 1,70\n");
	printf("101 - Bauru simples\tR$ 2,30\n");
	printf("102 - Bauru com ovo\tR$ 2,60\n");
	printf("103 - Hamburguer\tR$ 2,40\n");
	printf("104 - Cheeseburguer\tR$ 2,50\n");
	printf("105 - Refrigerante\tR$ 1,00\n");
	printf("\nInsira o código do produto desejado:\t");
	scanf("%d", &opcao);
	
	return opcao;
}

int numero()
{
	
	int quantidade;
	
	printf("\nDigite a quantidade de unidades desse mesmo produto que você deseja (limite de 10):\t");
	scanf("%d", &quantidade);
	
	return quantidade;
}

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	int quantidade;
	float custo;
	float res;
	
	do{
		opcao = pedido();
		if ((opcao < 100) || (opcao > 105))
			printf("Código não aceito\n");
		
		quantidade = numero();
		if ((quantidade < 1) || (quantidade > 10))
			printf("Valor não aceito\n");
		
				switch(opcao)
				{
					case 100:
						custo = 1.70;		
						res = custo * quantidade;	
						printf("\nPreço total da compra = %0.2f", res);	
						break;
					case 101:
						custo = 2.30;		
						 res = custo * quantidade;
						printf("\nPreço total da compra = %0.2f", res);	
						break;
					case 102:
						custo = 2.60;		
						 res = custo * quantidade;
						printf("\nPreço total da compra = %0.2f", res);			
						break;
					case 103:
						custo = 2.40;	
						res = custo * quantidade;
						printf("\nPreço total da compra = %0.2f", res);			
						break;	
					case 104:
						custo = 2.50;	
						res = custo * quantidade;
						printf("\nPreço total da compra = %0.2f", res);				
						break;
					case 105:
						custo = 1.00;
						res = custo * quantidade;
						printf("\nPreço total da compra = %0.2f", res);			
						break;			
				}
					break;
				

	}while (opcao);
	
}
