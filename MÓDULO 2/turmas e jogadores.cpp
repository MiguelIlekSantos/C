#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int alu;
	int maior = 0;
	int turmaior;
	int menor = 30;
	int turmenor;
	int soma;
	float media;
	
	int a = 0;
	while(alu != -1){
		printf("Turma %d (nº de jogadores de CS): ", a+1);
		scanf("%d", &alu);
		if(alu < -1){
			printf("Dados inválidos");
			return 0;
		}
		if(maior < alu){
			maior = alu;
			turmaior = a+1;
		}
		if((alu != -1) && (menor > alu)){
			menor = alu;
			turmenor = a+1;
		}
		soma += alu;
		a++;
	}	
		
	printf("\nNº de turmas: %d\n", a-1);
	printf("Mais jogadores: Turma %d - %d\n", turmaior, maior);
	printf("Menos jogadores: Turma %d - %d\n", turmenor, menor);
	printf("Média Jogadores/Turma: %.2f", media = (soma + 1)/(a - 1));
	
}
