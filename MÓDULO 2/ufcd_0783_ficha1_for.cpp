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
	
	/*
	float notas[5] = {0};
	float total = 0;
	float media = 0;
	
	printf("Insira 5 notas:\n");
	scanf("%f %f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
	
	printf("%0.2f %0.2f %0.2f %0.2f %0.2f", notas[0], notas[1], notas[2], notas[3], notas[4]);	
	
	
	int var1[2][2][2];	
	
	
	
	
	int num;
	int lim;
	int a;
	
	printf("Insira o n�mero :\t");
	scanf("%d", &num);
	if(num > 0){
		
		printf("\nLimite m�ximo :\t");
		scanf("%d", &lim);
		printf("\n\n");
			
		if(lim > num){
			a = num;
			while(a <= lim){
				if((a % num) == 0){
					printf("Divisor:\t %d\n", a);
				}else if(a == lim){
					printf("Limite excedido");
				}
				++a;
			}
	
		}else{
			printf("Limite inv�lido");
		}
		
	}else{
		printf("N�mero Inv�lido");
	}
	
	
	
	
	int num;
	int lim;
	int a;
	
	printf("Insira o n�mero :\t");
	scanf("%d", &num);
	if(num > 0){
		
		printf("\nLimite m�ximo :\t");
		scanf("%d", &lim);
		printf("\n\n");
			
		if(lim > num){
			for(a = num;a <= lim; ++a){
				if((a % num) == 0){
					printf("Divisor:\t %d\n", a);
				}else if(a == lim){
					printf("Limite excedido");
				}
			}
	
		}else{
			printf("Limite inv�lido");
		}
		
	}else{
		printf("N�mero Inv�lido");
	}
	
	
	
	int num;
	int lim;
	int a;
	
	printf("Insira o n�mero :\t");
	scanf("%d", &num);
	if(num > 0){
		
		printf("\nLimite m�ximo :\t");
		scanf("%d", &lim);
		printf("\n\n");
			
		if(lim > num){
			a = num;
			do{
				if((a % num) == 0){
					printf("Divisor:\t %d\n", a);
				}else if(a == lim){
					printf("Limite excedido");
				}
				++a;
			}while(a <= lim);
	
		}else{
			printf("Limite inv�lido");
		}
		
	}else{
		printf("N�mero Inv�lido");
	}
	
	
	*/
	
	
	float a; 
	float b;
	
	
	printf("N�mero : ");
	scanf("%f", &a);
	
	printf("\n\nDivisor : ");
	scanf("%f", &b);
	
	
	printf("\n\n Resultado : %f", a/b);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
