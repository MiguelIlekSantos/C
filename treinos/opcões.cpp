#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

void comidas()
{
	int opcao, quantidade;
	float custo, res;
	
	printf("\n\nCardápio\n");
	printf("\n100 - Cachorro quente\tR$ 1,70\n");
	printf("101 - Bauru simples\tR$ 2,30\n");
	printf("102 - Bauru com ovo\tR$ 2,60\n");
	printf("103 - Hamburguer\tR$ 2,40\n");
	printf("104 - Cheeseburguer\tR$ 2,50\n");
	printf("105 - Refrigerante\tR$ 1,00\n");
	printf("\nInsira o código do produto desejado:\t");
	scanf("%d", &opcao);
	
	if ((opcao < 100) || (opcao > 105))
	printf("Código não aceito\n");
	else{
		printf("\nDigite a quantidade de unidades desse mesmo produto que você deseja (limite de 10):\t");
		scanf("%d", &quantidade);
		
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
	}
}

void taxas()
{
	int opcao3;
	float nascimentos, obitos, habitantes;
	
	printf("Escolha a opção desejada :\n");
	printf("1- Taxa de natalidade\n");
	printf("2- Taxa de mortalidade\n");
	printf("Opcão escolhida :\t");
	scanf("%d", &opcao3);
	
	switch (opcao3)
	{
		case 1:
			printf("Insira a quantidade de nascimentos na cidade no período de um ano:\n");
			scanf("%f",&nascimentos);
			printf("Insira a quantidade de habitantes residentes na cidade atualmente:\n");
			scanf("%f",&habitantes);
			printf("A taxa de natalidade é igual a %f", (nascimentos*1000)/habitantes);
			break;
		case 2:
			printf("Insira a quantidade de óbitos na cidade no período de um ano:\n");
			scanf("%f",&obitos);
			printf("Insira a quantidade de habitantes residentes na cidade atualmente:\n");
			scanf("%f",&habitantes);
			printf("A taxa de mortalidade é igual a %f", (obitos*1000)/habitantes);
			break;	
		default:
			printf("Opção não existe");
			break;	
	}
}

void circ()
{
	float raio, perimetro, area;
	
	printf("introduza o valor do raio :\t");
	scanf("%f", &raio);
	
	perimetro = 2 * PI * raio;
	area = raio * raio * PI;
	
	printf("O valor do perimetro é:%.2f\n",perimetro);
	printf("O valor da área é: %.2f\n",area);
}

void minicalc()
{
	int x, y, res;
	char simbolo;
	
	printf("Escreva uma breve expressão:\n");
	scanf("%d %c %d",&x, &simbolo, &y);
	
	switch(simbolo)
	{	
		
		case '+': res=x+y;
		break;
		case '-': res=x-y;
		break;
		case 'x':
		case 'X':
		case '*': res=x*y;
		break;
		case ':':
		case '/':
		case '\\': res=x/y;
		break;           
		
		default:
			printf("Operação inválida");break;
	}
	if(res != 0)
	{printf("%d %c %d = %d", x, simbolo, y, res);
	}
	
}

void poligonos()
{
	int ladoquantidade;
	float ladotamanho;
	float res, apotema, alturatri;
	
	printf("Insira o número de lados do polígono:\t");
	scanf("%d", &ladoquantidade);
		
	if (ladoquantidade < 3){
		printf("NÃO É UM POLÍGONO");
	}
	else if (ladoquantidade > 5){
		printf("POLÍGONO NÃO IDENTIFICADO");	
	}
	else{
	printf("\nInsira a dimensão do lado do polígono(cm):\t");
	scanf("%f", &ladotamanho);
	if (ladoquantidade == 3){
		printf("\nQual a altura do triângulo ?\t");
		scanf("%f", &alturatri);
		printf("\nTriângulo\nÁrea = %.2f", (ladotamanho * alturatri) / 2);
	}	
	else if (ladoquantidade == 4){
		printf("\nQuadrado\nÁrea = %.2f", ladotamanho * ladotamanho);	
	}
	else if (ladoquantidade == 5){
		
		res = pow(ladotamanho,2) - pow((ladotamanho/2),2);
		apotema = sqrt(res);
		
		printf("\nPentágono\nÁrea = %.2f", ((ladotamanho * apotema) / 2) * 5);		
	}
		
	}	
}
void caso1()
{
	int opcao2;
	
	printf("Escolha a opção desejada :\n");
	printf("1- Calcular a área de triãngulos, quadrados ou pentágonos\n");
	printf("2- Expressões básicas\n");
	printf("3- Perímetro e área de um círculo\n");
	printf("Opcão escolhida :\t");
	scanf("%d", &opcao2);
				
	switch (opcao2)
	{
		case 1:
			poligonos();
			break;
		case 2:
			minicalc();
			break;
		case 3:
			circ();
			break;	
		default:
			printf("Opção não existe");
			break;
					
	}
}

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao1;
	int opcao2;
	
	do{
		
		printf("\n\nEscolha o opção desejada :\n");
		printf("1- Calculadora\n");
		printf("2- Taxas\n");
		printf("3- Ementa\n");
		printf("Opção escolhida :\t");
		scanf("%d", &opcao1);
		system("cls || clear");	
		
		
		switch (opcao1)
		{
			case 1:
				caso1();
				break;
			case 2:
				taxas();
				break;
			case 3:
				comidas();
				break;	
			default:
				printf("Opção não existe");
				break;	
		}
		
	
	}while (opcao1);

}
