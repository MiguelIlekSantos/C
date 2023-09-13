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
	
	/* int vetor[5] = {1,5,-24,9,57};
	
	for (int i = 0; i < 5 ; ++i){
		printf("%d\n", vetor[i]);
	}	
	
	
	
	
	float notas[5] = {0};
	float total = 0;
	float media = 0;
	
	printf("Insira 5 notas:\n");
	scanf("%f %f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
	
	printf("%0.2f %0.2f %0.2f %0.2f %0.2f", notas[0], notas[1], notas[2], notas[3], notas[4]);
	
	
	for (int i = 0; i < 5 ; ++i ){
		scanf("%f", &notas[i]);
	}

	for (int i = 0; i < 5 ; ++i ){
		total += notas[i];
	}

	media = total / 5;
	
	printf("A média do aluno é %f", media);

	*/
	
	float roma[4] [4];
	
	for (int i = 0; i < 4 ; ++i ){
		for (int j = 0; j < 4; ++j){
			scanf("%f\n", &roma[i][j]);	
		}
	}
	
	printf("\n%f", roma[0] [3]);

	
		
	
}
