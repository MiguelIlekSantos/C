#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int avaliacao, aula;
	
	printf("Insira a nota da avaliação\n");
	scanf("%d", &avaliacao);
	printf("Insira a nota de comportamento em sala de aula\n");
	scanf("%d", &aula);
	
	if ((avaliacao >= 15 ) && (aula >= 10)){
		
		printf("Desempenho: Muito Bom");
		
	}
	 else if ((avaliacao < 15) && (avaliacao > 10) && (aula < 10)){
		printf("Desempenho: Bom");
		
	}
		
	 else if  ((avaliacao < 10) && (aula > 10)){
		
		printf("Desempenho: Satisfaz");
		
	}
		
	  if ((avaliacao < 10) && (aula < 10)){
		
		printf("Desempenho: Não Satisfaz");
	
	}
	
	return 0;
}
