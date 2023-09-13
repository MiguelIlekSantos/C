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
		
	/*	
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
	
	
	
	
	
	//A partir daqui é o código na versão while 
	
	
	
	
	
	
	int a = 0;
	while(a < 10){
		printf("%d ",valores[a]);
		++a;
	}
	printf("\n\n");
	
	int b = 9;
	while(b >= 0){
		printf("%d ",valores[b]);
		--b;
	}
	
	int f = 0;
	
	while(f < 10){
		int g = 0;
		while(g < 10){
			if(valores[g] > valores[f]){
				int bobble = valores[f];
				valores[f] = valores[g];
				valores[g] = bobble;
			}
			++g;
		}
		++f;
	}
	
	printf("\n\n");
	
	printf("Maior : %d", valores[9]);
	printf("\n\n");
	
	printf("Menor : %d", valores[0]);
	printf("\n\n");
	
	int e = 0;
	while(e < 10){
		soma += valores[e];
		++e;
	}
	printf("Soma : %d", soma);
	printf("\n\n");
	
	printf("Média : %.2f", (float)soma/10);
	printf("\n\n");
	
	int h = 0;
	while(h < 10){
		printf("%d ", valores[h]);
		++h;
	}
	printf("\n\n");
	
	int i = 9;
	while(i >= 0){
		printf("%d ", valores[i]);
		--i;
	}
	*/
	
	
	
	
	
	
	
	//A partir daqui é o código na versão do e while 
	
	
	
	
	
	
	
	int a = 0;
	do{
		printf("%d ",valores[a]);
		++a;
	}while(a < 10);
	printf("\n\n");
	
	int b = 9;
	do{
		printf("%d ",valores[b]);
		--b;
	}while(b >= 0);
	
	int f = 0;
	
	do{
		int g = 0;
		do{
			if(valores[g] > valores[f]){
				int bobble = valores[f];
				valores[f] = valores[g];
				valores[g] = bobble;
			}
			++g;
		}while(g < 10);
		++f;
	}while(f < 10);
	
	printf("\n\n");
	
	printf("Maior : %d", valores[9]);
	printf("\n\n");
	
	printf("Menor : %d", valores[0]);
	printf("\n\n");
	
	int e = 0;
	do{
		soma += valores[e];
		++e;
	}while(e < 10);
	printf("Soma : %d", soma);
	printf("\n\n");
	
	printf("Média : %.2f", (float)soma/10);
	printf("\n\n");
	
	int h = 0;
	do{
		printf("%d ", valores[h]);
		++h;
	}while(h < 10);
	printf("\n\n");
	
	int i = 9;
	do{
		printf("%d ", valores[i]);
		--i;
	}while(i >= 0);
	
}
