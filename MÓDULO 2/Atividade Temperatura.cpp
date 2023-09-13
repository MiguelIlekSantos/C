#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
		
	
	int temp_max[9];	
	int soma_max;
	float media_max;
	int temp_min[9];
	int soma_min;
	float media_min;
	
	for(int a = 0; a < 9; ++a){
		printf("Digite a temperatura maxima do dia %d : ", a+1);
		scanf("%d", &temp_max[a]);
		soma_max += temp_max[a];
		printf("Digite a temperatura minima do dia %d : ", a+1);
		scanf("%d", &temp_min[a]);
		soma_min += temp_min[a];
		printf("\n");
	}
	
	printf("\n\nTemperaturas em Cº\n");
	printf("Figueira da Foz\n");
	printf("Março 2023\n\n");
	printf("-------------------\n");
	printf("Dia\tMax\tMin\n");
	printf("-------------------\n");
	for(int b = 0; b < 9; ++b){
		printf("%d\t%d\t%d\n", b+1,temp_max[b],temp_min[b]);		
	}
	
	media_max = (float)soma_max/9;
	media_min = (float)soma_min/9;

	printf("\nMedia das maximas : %.2f", media_max);
	printf("\nMedia das minimas : %.2f", media_min);

	printf("\n\nTemperatura Maxima de cada dia: \n\n");
	for(int e = 0; e < 9; ++e){
		printf("Dia %d: ", e+1);
		int f = 0;
		while(f < temp_max[e]){
			printf(" %c", 178);
			++f;
		}
		printf("\n\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
