#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	/*
	int vetor1[6] = {2,9,8,5,12,7};
	int vetor2[6] = {4,3,8,11,10,15};	
	int op;
	int soma_pares;
	int soma_impares;
	
	for(int a = 0; a < 6; ++a){
		if(vetor1[a] % 2 == 0){
			soma_pares += vetor1[a];
		}
		if(vetor2[a] % 2 == 0){
			soma_pares += vetor2[a];
		}
		if(vetor1[a] % 2 != 0){
			soma_impares += vetor1[a];
		}
		if(vetor2[a] % 2 != 0){
			soma_impares += vetor2[a];
		}
		
	}

	printf("QUER CONTINUAR E MOSTRAR OS VETORES ? SIM-1 Não-0: ");
	scanf("%d", &op);
	
	switch(op){
		case 0:
			return 0;	
			
			break;
		
		case 1:
			printf("\n\n\t_________________________\n");
			printf("VETOR 1 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor1[b]);
			}
			printf("\n\t-------------------------");
			
			printf("\n\n\t_________________________\n");
			printf("VETOR 2 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor2[b]);
			}
			printf("\n\t-------------------------");
			printf("\n\nSoma dos Número pares : %d", soma_pares);
			printf("\n\nSoma dos Números ímpares : %d", soma_impares-1);
						
			break;
			
		default: 
			printf("Valor Inválido!");
			break;
		
	}
	
	int vetor1[6] = {2,9,8,5,12,7};
	int vetor2[6] = {4,3,8,11,10,15};	
	int op;
	int soma_pares;
	int soma_impares;
	int a = 0;
	
	while(a < 6){
		if(vetor1[a] % 2 == 0){
			soma_pares += vetor1[a];
		}
		if(vetor2[a] % 2 == 0){
			soma_pares += vetor2[a];
		}
		if(vetor1[a] % 2 != 0){
			soma_impares += vetor1[a];
		}
		if(vetor2[a] % 2 != 0){
			soma_impares += vetor2[a];
		}
		++a;
		
	}

	printf("QUER CONTINUAR E MOSTRAR OS VETORES ? SIM-1 Não-0: ");
	scanf("%d", &op);
	
	switch(op){
		case 0:
			return 0;	
			
			break;
		
		case 1:
			printf("\n\n\t_________________________\n");
			printf("VETOR 1 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor1[b]);
			}
			printf("\n\t-------------------------");
			
			printf("\n\n\t_________________________\n");
			printf("VETOR 2 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor2[b]);
			}
			printf("\n\t-------------------------");
			printf("\n\nSoma dos Número pares : %d", soma_pares);
			printf("\n\nSoma dos Números ímpares : %d", soma_impares-1);
						
			break;
			
		default: 
			printf("Valor Inválido!");
			break;
		
	}
	
	*/

		int vetor1[6] = {2,9,8,5,12,7};
	int vetor2[6] = {4,3,8,11,10,15};	
	int op;
	int soma_pares;
	int soma_impares;
	int a = 0;
	
	do{
		if(vetor1[a] % 2 == 0){
			soma_pares += vetor1[a];
		}
		if(vetor2[a] % 2 == 0){
			soma_pares += vetor2[a];
		}
		if(vetor1[a] % 2 != 0){
			soma_impares += vetor1[a];
		}
		if(vetor2[a] % 2 != 0){
			soma_impares += vetor2[a];
		}
		++a;
		
	}while(a < 6);

	printf("QUER CONTINUAR E MOSTRAR OS VETORES ? SIM-1 Não-0: ");
	scanf("%d", &op);
	
	switch(op){
		case 0:
			return 0;	
			
			break;
		
		case 1:
			printf("\n\n\t_________________________\n");
			printf("VETOR 1 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor1[b]);
			}
			printf("\n\t-------------------------");
			
			printf("\n\n\t_________________________\n");
			printf("VETOR 2 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor2[b]);
			}
			printf("\n\t-------------------------");
			printf("\n\nSoma dos Número pares : %d", soma_pares);
			printf("\n\nSoma dos Números ímpares : %d", soma_impares-1);
						
			break;
			
		default: 
			printf("Valor Inválido!");
			break;
		
	}
	
	
	
		
	


	

	
}
