#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");


	printf("Valor inteiro: %d\n", 10);
	printf("Valor inteiro longo: %hd\n", 2147483647);
	printf("Valor inteiro longo: %ld\n", 2147483647);
	printf("Valor real: %f\n", 3.14159);
	printf("Valor real com apenas duas casas décimais: %.2f\n", 3.14159);
	printf("Valor real em notação científica: %e\n", 0.123456789);
	printf("Valor real em notação científica: %e\n", -0.123456789);
	printf("Dados de texto: %c\n", 'Z');
	printf("Dados de texto: %s\n","Testando");
	

	
}

