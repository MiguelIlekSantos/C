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
	int vetor1[5];
	int vetor2[5];	
	int vetor3[10];
	
	for(int h = 0; h < 5; ++h){
		printf("Valor do vetor1:");
		scanf("%d", &vetor1[h]);
	}
	printf("\n\n");
	for(int i = 0; i < 5; ++i){
		printf("Valor do vetor2:");
		scanf("%d", &vetor2[i]);
	}
	
	for(int f = 0; f < 5; ++f){
		vetor3[2*f] = vetor1[f];
		vetor3[2*f+1] = vetor2[f];
	}
	printf("\n\n");		
	printf("Vetor 1:");
	for(int c = 0; c < 5; ++c){
		printf(" %d", vetor1[c]);
	}
	printf("\nVetor 2:");
	for(int d = 0; d < 5; ++d){
		printf(" %d", vetor2[d]);
	}
	printf("\n\nVetor 3:");
	for(int e = 0; e < 10; ++e){
		printf(" %d", vetor3[e]);
	}
	
	int vetor1[5];
	int vetor2[5];	
	int vetor3[10];
	
	int h = 0;
	while(h < 5){
		printf("Valor do vetor1:");
		scanf("%d", &vetor1[h]);
		++h;
	}
	printf("\n\n");
	int i = 0;
	while(i < 5){
		printf("Valor do vetor2:");
		scanf("%d", &vetor2[i]);
		++i;
	}
	int f = 0;
	while(f < 5){
		vetor3[2*f] = vetor1[f];
		vetor3[2*f+1] = vetor2[f];
		++f;
	}
	printf("\n\n");		
	printf("Vetor 1:");
	int c = 0;
	while(c < 5){
		printf(" %d", vetor1[c]);
		++c;
	}
	printf("\nVetor 2:");
	int d = 0;
	while(d < 5){
		printf(" %d", vetor2[d]);
		++d;
	}
	printf("\n\nVetor 3:");
	int e = 0;
	while(e < 10){
		printf(" %d", vetor3[e]);
		++e;
	}

	
	*/
	
		int vetor1[5];
	int vetor2[5];	
	int vetor3[10];
	
	int h = 0;
	do{
		printf("Valor do vetor1:");
		scanf("%d", &vetor1[h]);
		++h;
	}while(h < 5);
	printf("\n\n");
	int i = 0;
	do{
		printf("Valor do vetor2:");
		scanf("%d", &vetor2[i]);
		++i;
	}while(i < 5);
	int f = 0;
	do{
		vetor3[2*f] = vetor1[f];
		vetor3[2*f+1] = vetor2[f];
		++f;
	}while(f < 5);
	printf("\n\n");		
	printf("Vetor 1:");
	int c = 0;
	do{
		printf(" %d", vetor1[c]);
		++c;
	}while(c < 5);
	printf("\nVetor 2:");
	int d = 0;
	do{
		printf(" %d", vetor2[d]);
		++d;
	}while(d < 5);
	printf("\n\nVetor 3:");
	int e = 0;
	do{
		printf(" %d", vetor3[e]);
		++e;
	}while(e < 10);
	
}

