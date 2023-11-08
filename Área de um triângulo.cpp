#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");

	float altura, base, resultado;
	
	printf("Base?");
	scanf("%f",&base);
	printf("Altura?");
	scanf("%f",&altura);
	printf("\n");
	
	if (base <= 0)
		printf("O valor da base está incorreto");
	else if (altura <= 0)
		printf("O valor da altura está incorreto");
		
	resultado = (base * altura) / 2;
	
	if (base > 0 && altura > 0)
	
		printf("\t_____________\n\t|Area = %.1f|\n\t_____________",resultado);

	
}



