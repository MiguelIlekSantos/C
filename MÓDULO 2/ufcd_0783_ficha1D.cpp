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
	
	char nome[30][30];
	int quant;
	int a = 0;
	int b = 0;
	
	printf("Número de alunos (limite de 30):\t");
	scanf("%d", &quant);
	if((quant > 0) && (quant <= 30)){
		fflush(stdin);
		while(a < quant){
			fflush(stdin);
			printf("Nome do aluno %d: ", a+1);		
			gets(nome[a]);
			printf("\n");
			++a;
		} 	
	
	printf("\n\nNº de alunos : %d\n\n", quant);
	fflush(stdin);
	while(b < quant){
		printf("%s = %d\n\n", nome[b], strlen(nome[b])-1);			
		++b;
	}
	
	}else{
		printf("Valor Inválido");	 
	}
		
}
