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
	int a = 1;
	int b = 10;
	int c = 1;
	int d = 10;
	int e;
	int f = 1;
	int g;
	int h = 1;
	
	do{
		printf("%d\n", a);
		++a;
		
	}while(a <= 10);
	
	printf("\n\n");
	
	do{
		printf("%d\n", b);
		--b;
		
	}while(b >= 1);
	
	printf("\n\n");	
	
	while(c <= 10){
		printf("%d\n", c);
		++c;
	}
	
	printf("\n\n");
	
	while(d >= 1){
		printf("%d\n", d);
		--d;
	}
	
	printf("Qual o número ?\n");
	scanf("%d", &e);
	
	while(f <= e){
		printf("%d\n", f);
		++f;
	}
			
	printf("\n\n");	
	
	printf("Qual o número ?\n");
	scanf("%d", &g);
	
	while(h <= g){
		printf("%d\n", g);
		--g;
	}
	
	
	
	for(int a = 1; a <= 10; ++a){
		for(int b = 1; b <= 10; ++b){
			printf("%d * %d = %d\n", a, b, a*b);
		}
		printf("\n");
	}
	*/
	
	int a = 1;
	int b;
	
	while(a <= 10){
		b = 1;
		while(b <= 10){
			printf("%d * %d = %d\n", a, b, a*b);
			++b;
		}
		printf("\n");
		++a;
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
