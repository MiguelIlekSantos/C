#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
	char nome[50];
	char telefone[50];
}Contato;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Contato cadastro[3];
	
	for(int a = 0; a < 3; ++a){
		printf("Digite seu nome :\t");
		scanf("%s", &cadastro[a].nome);
		printf("Digite seu telefone :\t");
		scanf("%s", &cadastro[a].telefone);
		printf("\n");
	}
	
	for(int b = 0; b < 3; ++b){
		printf("\n %s \n %s", cadastro[b].nome, cadastro[b].telefone);	
	}
	
}

