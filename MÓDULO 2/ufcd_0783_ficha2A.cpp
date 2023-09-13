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
	
	
	float idade[5];
	int a = 0;
	
	while(a < 5){
		printf("\nInsira a idade do aluno %d: ", a+1);
		scanf("%f", &idade[a]);
		if(idade[a] <= 0){
			printf("\nNota Inválida");
			break;
		}
		++a;
	}
	
	if((idade[0] > 0) && (idade[1] > 0) && (idade[2] > 0) && (idade[3] > 0) && (idade[4] > 0)){
		printf("\n\nA média das idades é %.2f", (idade[0] + idade[1] + idade[2] + idade[3] + idade[4]) / 5);	
	}
	
	/*
	
	







	
	
	float idade[5];
	
	for(int a = 0; a < 5; ++a){
		printf("\nInsira a idade do aluno %d: ", a+1);
		scanf("%f", &idade[a]);
		if(idade[a] <= 0){
			printf("\nNota Inválida");
			break;
		}
	}
	  
	if((idade[0] > 0) && (idade[1] > 0) && (idade[2] > 0) && (idade[3] > 0) && (idade[4] > 0)){
		printf("\n\nA média das idades é %.2f", (idade[0] + idade[1] + idade[2] + idade[3] + idade[4]) / 5);	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	float idade[5];
	int a = 0;
	
	do{
		printf("\nInsira a idade do aluno %d: ", a+1);
		scanf("%f", &idade[a]);
		if(idade[a] <= 0){
			printf("\nNota Inválida");
			break;
		}
		++a;
	}while(a < 5);
	
	if((idade[0] > 0) && (idade[1] > 0) && (idade[2] > 0) && (idade[3] > 0) && (idade[4] > 0)){
		printf("\n\nA média das idades é %.2f", (idade[0] + idade[1] + idade[2] + idade[3] + idade[4]) / 5);	
	}
		
	
	*/	
}
