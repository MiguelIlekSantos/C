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
	
	int x = 10;	
	float y = 20.5;
	char z = 'M';
	
	/* 
		*pont1 | *pont2 | *pont3 se referem ao conteúdo do espaço ocupado
		x | y | z se referem ao conteúdo do espaço ocupado
		
		pont1 | pont2 | pont3 se referem ao número do espaço ocupado
		&x | &y | &z se referem ao número do espaço ocupado
	*/
	
	int *pont1;
	pont1 = &x;
	
	float *pont2;
	pont2 = &y;
	
	char *pont3;
	pont3 = &z;
	
	printf("%d\t%d", x, pont1);
	printf("\n\n");
	printf("%.2f\t%d", y, pont2);
	printf("\n\n");
	printf("%c\t%d", z, pont3);
	
}
