#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
	char nome[50];
	float nota;
}Aluno;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Aluno Aluno[5];
	float media;
	
	for(int a = 0; a < 5; ++a){
		printf("Digite seu nome :\t");
		scanf("%s", &Aluno[a].nome);
		printf("Digite sua nota :\t");
		scanf("%f", &Aluno[a].nota);
		printf("\n");
	}
	
	for(int b = 0; b < 5; ++b){
		media += Aluno[b].nota;
	}	
	
	printf("A média é : %.2f", media/5);
	
	
}

