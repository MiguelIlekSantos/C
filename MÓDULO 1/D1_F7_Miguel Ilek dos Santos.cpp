#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Por favor informe o ano em questão\n");
	scanf("%d", &ano);
	if (ano == (int)ano){
		printf("Valor aceito\n");
		
	} 
	if (ano % 4 == 0){
		printf("O ano é bissexto");
		
	}  else   {
		printf("O ano não é bissexto");
		
	}
	
	
}
