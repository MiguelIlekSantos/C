#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	/*
	char tecla;
	int vezes;
	
	for(vezes = 0; tecla != 'q'; vezes++){
		printf("Carregue numa tecla (q - termina):  ");
		tecla = getch();
		printf("%c\n", tecla);
	}
	
	printf("Carregou %d teclas\n", vezes);
	
	
	for(int a = 1; a <= 10; ++a){
		printf("%d\n", a);
	}
	
	printf("\n\n");
	
	for(int b = 10; b >= 1; --b){
		printf("%d\n", b);
	}	
	
	
	
	int d;
	
	printf("Digite um n�mero :\t");
	scanf("%d", &d);
	
	for(int c = 0; d >= c; ++c){
		printf("%d\n", c);
	}
	
	int f;
	
	printf("Digite um n�mero :\t");
	scanf("%d", &f);
	
	for(int e = 0; e <= f; ++e){
		printf("%d\n", e);
	}
	
	
	for(int a = 1; a <= 10; ++a){
		for(int b = 1; b <= 10; ++b){
		printf("%d * %d = %d\n", a, b, a*b);
		}
		printf("\n");
	}
	
	
	
	for(int h = 1; h <= 10; ++h){     
		for(int i = 1; i <= h; ++i){   
			printf("%d ", i);	
		}
		printf("\n");
	}
	
	
	
	int j = 1;
	int k;
	
	while(j <= 43){
		k = 1;
		while(k <= j){
			printf("%d ", k);
			++k;
		}
		printf("\n");
		++j;
	}
	
	
	
	
	int b;
	int num;
	float soma = 0;
	
	printf("Digite a quantidade de n�meros :\t");
	scanf("%d", &b);
	for(int a = 0; a < b; ++a){
			printf("Digite o n�mero :\t");
			scanf("%d", &num);
			soma += num;		
	}	
	printf("A m�dia � = %.2f", soma/b);

	
	
	char yon;
	int num;
	float soma;
	int numciclos = 0;
	
	do{
		printf("Insira o n�mero :\t");
		scanf("%d", &num);
		soma += num;
		printf("Deseja Adicionar outro n�mero ?\n (S) sim\n (N) n�o\n");
		scanf(" %c", &yon);
		printf("\n");
		++numciclos;
		
	}while(yon != 'N');
	
	printf("A m�dia � %.2f", soma/numciclos);	
	
	
	
// escreva um c�digo onde apresente v�rias vezes se quer adicionar mais um n�mero ou n�o. Se a resposta for n�o apresente a m�dia dos n�meros.
	
	int a = 100;
	int c = 2;
	int d = 0;
	
	printf("Pares = ");
	for(int b = 2; b < a; b=b+2){
		printf("%d ", b);
		++c;
	}
	printf("\nN�mero de pares : %d", c);
	
	printf("\n\n");

	printf("�mpares = ");
	for(int e = 1; e < a; e=e+2){
		printf("%d ", e);
		++d;
	}
	printf("\nN�mero de �mpares : %d", d);
	
	*/
	
	int ramos;
	int j = 0;
	int k = 1;
	
	
	printf("Quantos ramos ?\n");
	scanf("%d", &ramos);
	
	while(j <= ramos){
		k = 1;
		while(k <= j){
			printf("%c ", 'A'+j-1);
			++k;
		}
		printf("\n");
		++j;
	}
	
	
	

	
	
	
	
	
	
	
	
	
	
}
