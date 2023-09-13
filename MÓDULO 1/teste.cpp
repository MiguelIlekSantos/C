#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int nota1 = 2;
	int nota2 = 3;
	int nota3 = 4;
	int notaexamenacional = 100;
	
	float resultado = (nota1 + nota2 + nota3) / 3 * 0.7 + notaexamenacional * 0.3;

	printf("Resultado = %.2f", resultado);


	
}
