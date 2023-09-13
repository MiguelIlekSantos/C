#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	int vetor1[6] = {5,6,9,3,8,2};
	int vetor2[6] = {7,11,9,5,6,1};	
	int vetor3[6];
	char op;
	int maior = 0;
	int soma;
	float media;
	int bobble1;
	
	for(int a = 0; a < 6; ++a){
		vetor3[a] = vetor1[a] * vetor2[a];
	}
	
	for(int c = 0; c < 6; c++){
		if(maior < vetor3[c]){
			maior = vetor3[c];
		}
	}
	
	for(int d = 0; d < 6; d++){
		soma += vetor3[d];
	}
	
	media = soma/6;

	printf("QUER CONTINUAR E MOSTRAR OS VETORES ? SIM-S/s Não-N/n: ");
	scanf("%c", &op);
	
	switch(op){
		case 'n':
		case 'N':
			return 0;	
			
			break;
		
		case 's':
		case 'S':
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
			
			printf("\n\n\t____________________________\n");
			printf("VETOR 3 ");
			printf("|");
			for(int b = 0; b < 6; ++b){
				printf(" %d |", vetor3[b]);
			}
			printf("\n\t----------------------------");
			
			printf("\n\nMaior VETOR 3: %d", maior);
			
			printf("\n\n\tSOMA: %d", soma-1);
			printf("\n\tMÉDIA: %.1f", media);
			
			for(int f = 0; f < 6; ++f){
				for(int g = f+1; g < 6; ++g){
					if(vetor3[g] < vetor3[f]){
					bobble1 = vetor3[g];
					vetor3[g] = vetor3[f];
					vetor3[f] = bobble1;
					}
				}
			}
			
			printf("\n\nCRESCENTE: ");
			for(int e = 0; e < 6; ++e){
				printf("%d |", vetor3[e]);
			}
			
			break;
		
	}
	
	


	
}
