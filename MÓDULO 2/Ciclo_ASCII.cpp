#include <stdio.h>

int main()
{

	
	/*
	for(int a = 0;a <= 255; ++a){
		printf("%d --> %c\n", a, a);
	}	
	
	for(int b = 0;b<=255; b++){
		printf("%c --> %d\n", ' '+b, (int) ' '+b);
	}
	*/
	
	int cod;
	
	printf("Insira o código do símbolo:\t");
	scanf("%d", &cod);
		
	for(;cod <= 255; ++cod){
		printf("%c --> %d\n", cod, cod);
	}	
	
}
