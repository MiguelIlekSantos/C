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
	
	char nome[50];
	int maiorstrlen = 0;
	char maiornome[50];
	int soma;
	
	
	// aqui � o ciclo vers�o while
	
	/*
	int a = 0;
	while(1){ 
		fflush(stdin);
		printf("\nAluno N� %d : ", a+1);
		fgets(nome, 49, stdin);
		
		if(maiorstrlen < strlen(nome)){
			maiorstrlen = strlen(nome);
			for(int a = 0; a <= 50; ++a){
				maiornome[a] = nome[a];	
			}
		}
		++a;
		 
	    if(nome[0] == 'f' && nome[1] == 'i' && nome[2] == 'm')
	    {
	    	break;
		}
	}	
	
	printf("\n\nN�mero de alunos: %d\n", a-1);                          
	printf("Nome mais comprido: %s(%d caracteres)", maiornome, maiorstrlen-1);
	
	
	
	// aqui � o ciclo vers�o for 
	
	
	
	int a = 0;
	for(int z = 0;;++z){ 
		fflush(stdin);
		printf("\nAluno N� %d : ", a+1);
		fgets(nome, 49, stdin);
		
		if(maiorstrlen < strlen(nome)){
			maiorstrlen = strlen(nome);
			for(int a = 0; a <= 50; ++a){
				maiornome[a] = nome[a];	
			}
		}
		++a;
		 
	    if(nome[0] == 'f' && nome[1] == 'i' && nome[2] == 'm')
	    {
	    	break;
		}
	}	
	
	printf("\n\nN�mero de alunos: %d\n", a-1);                          
	printf("Nome mais comprido: %s(%d caracteres)", maiornome, maiorstrlen-2);
	
	
	*/
	
	
	
	//aqui � o ciclo vers�o do whilw
	
	
	int a = 0;
	do{
		fflush(stdin);
		printf("\nAluno N� %d : ", a+1);
		fgets(nome, 49, stdin);
		
		if(maiorstrlen < strlen(nome)){
			maiorstrlen = strlen(nome);
			for(int a = 0; a <= 50; ++a){
				maiornome[a] = nome[a];	
			}
		}
		++a;
		 
	    if(nome[0] == 'f' && nome[1] == 'i' && nome[2] == 'm')
	    {
	    	break;
		}
	}while(a);	
	
	printf("\n\nN�mero de alunos: %d\n", a-1);                          
	printf("Nome mais comprido: %s(%d caracteres)", maiornome, maiorstrlen-2);
	
	
}
