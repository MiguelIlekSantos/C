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

	int valores[10] = {12,8,1,7,5,9,15,20,18,3};
	int soma;


	for(int a = 0; a < 10; ++a){
		printf("%d ",valores[a]);
	}
	printf("\n\n");

	for(int b = 9; b >= 0; --b){
		printf("%d ",valores[b]);
	}

	for(int f = 0; f < 10; ++f){
		for(int g = 0; g < 10; ++g){
			if(valores[g] > valores[f]){
				int bobble = valores[f];
				valores[f] = valores[g];
				valores[g] = bobble;
			}
		}
	}

	printf("\n\n");

	printf("Maior : %d", valores[9]);
	printf("\n\n");

	printf("Menor : %d", valores[0]);
	printf("\n\n");

	for(int e = 0; e < 10; ++e){
		soma += valores[e];
	}
	printf("Soma : %d", soma);
	printf("\n\n");

	printf("Média : %.2f", (float)soma/10);
	printf("\n\n");

	for(int f = 0; f < 10; ++f){
		printf("%d ", valores[f]);
	}
	printf("\n\n");

	for(int f = 9; f >= 0; --f){
		printf("%d ", valores[f]);
	}



}
