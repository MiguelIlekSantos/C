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
	
	/*	int var = 5;
	int res = 1;
	
	for (; var >= 1; --var){
		res *= var;
	}
	 
	printf ("Fatorial = %d",res);
	*/
	
	
	
	/*
		for (int i = 0; i < 13; i = i+1){
		printf("Tomeee! Valor = %d\n", i);
		
		for (int j = 0; j < 11; j = j+1){
			printf("Ponto = %d\n", j);
		}
		
		printf("\n");
	}	
	*/	
	
	int num;
	
	printf("Insira o número : ");
	scanf("%d", &num);
	
	for(int a = 1; a <= 10; ++a){
		printf("%d * %d = %d\n", num, a, num*a);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



			
	
	
}
