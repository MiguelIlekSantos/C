#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	float taxa;
	float totalimposto;
	float resultado;
	
	printf("Qual o valor do sal�rio?\n");
	scanf("%f", &salario);
	if (salario < 1000)
		taxa = 0.05;
	else 
	    if (salario < 5000 && salario >1000)
	    taxa = 0.11;
	else
	    if (salario >5000)
	    taxa = 0.35;
	
	totalimposto = salario*taxa;
	
	resultado = salario - totalimposto;
	
	printf("O seu imposto total �: %.2f\n", totalimposto);
	printf("O seu sal�rio l�quido �: %.2f" ,resultado);
	
	
}
