#include <stdio.h> 
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{
	
	int vetor1[5];
	int vetor2[5];	
	int vetor3[10];
	int soma_vetor3;
	float media_vetor3;
	char vetor_char[5];
	int vetor4[10];
	
	
	int h = 0;
	do{
		printf("Valor %d do vetor1:", h);
		scanf("%d", &vetor1[h]);
		if(vetor1[h] < 0){
			printf("Valor invalido!");
			return 0;
		}
		++h;
	}while(h < 5);
	printf("\n\n");
	
	int i = 0;
	do{
		printf("Valor %d do vetor2:", i);
		scanf("%d", &vetor2[i]);
		if(vetor2[i] < 0){
			printf("Valor invalido!");
			return 0;
		}
		++i;
	}while(i < 5);
	
	int f = 0;
	do{
		vetor3[2*f] = vetor1[f];
		vetor3[2*f+1] = vetor2[f];
		++f;
	}while(f < 5);
	
	for(int a = 0; a < 10; ++a){
		soma_vetor3 = soma_vetor3 + vetor3[a];
	}
	
	media_vetor3 = (float)soma_vetor3 / 10;
	
	printf("\n\n");
	printf(" _____________________\n");		
	printf("|Vetor 1:");
	int c = 0;
	do{
		printf(" %d", vetor1[c]);
		++c;
	}while(c < 5);
	printf("   |");
	
	printf("\n|Vetor 2:");
	int d = 0;
	do{
		printf(" %d", vetor2[d]);
		++d;
	}while(d < 5);
	printf("  |\n");
	printf("|_____________________|");
	printf("\n\nVetor 3:");
	int e = 0;
	do{
		printf(" %d", vetor3[e]);
		++e;
	}while(e < 10);
	
	printf("\n\n\tSoma vetor 3 = %d", soma_vetor3);
	printf("\n\n\tMedia vetor 3 = %.1f", media_vetor3);
	
	printf("\n\nInsira 5 caracteres :\n");
	
	for(int b = 0; b < 5; ++b){
		scanf(" %c", &vetor_char[b]);
	}
	
	int z = 0; 
	do{
		vetor4[2*z] = vetor1[z];
		vetor4[2*z+1] = vetor_char[z];
		++z;
	}while(z < 5);
	printf("\nQuarto vetor:");
	for(int y = 0; y < 10; y+=2){
		printf("%d ", vetor4[y]);
		printf("%c ",(char)vetor4[y+1]);
	}
	
	
	
	
} 
	
