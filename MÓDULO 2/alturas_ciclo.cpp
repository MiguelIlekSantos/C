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
	
	float altura[10];
	int a = 0;
	float maior = 0;
	
	while(a < 10){
		printf("\nInsira a altura do aluno %d: ", a+1);
		scanf("%f", &altura[a]);
		if((altura[a] < 1.5) || (altura[a] > 2.5)){
			printf("\nNota Inválida");
			break;
		}
		if(maior < altura[a]){
			maior = altura[a];
		}
		++a;
	}
		
	printf("\n\nA maior altura é %.2f", maior);
	
	
	
	
	
	float altura[10];
	int a = 0;
	float maior = 0;
	
	do{
		printf("\nInsira a altura do aluno %d: ", a+1);
		scanf("%f", &altura[a]);
		if((altura[a] < 1.5) || (altura[a] > 2.5)){
			printf("\nNota Inválida");
			break;
		}
		if(maior < altura[a]){
			maior = altura[a];
		}
		++a;
	}while(a < 10);
		
	printf("\n\nA maior altura é %.2f", maior);
	
	
	
	
	*/
	
	
	float altura[10];
	float maior = 0;
	
	for(int a = 0; a < 10; ++a){
		printf("\nInsira a altura do aluno %d: ", a+1);
		scanf("%f", &altura[a]);
		if((altura[a] < 1.5) || (altura[a] > 2.5)){
			printf("\nNota Inválida");
			break;
		}
		if(maior < altura[a]){
			maior = altura[a];
		}
	}
		
	printf("\n\nA maior altura é %.2f", maior);
	
}
