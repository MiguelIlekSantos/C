#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	 
	 int ordenado;
	 int premios;
	 
	printf("Ordenado e premio\n");
	scanf("%d, %d", &ordenado, &premios);
	
	if (ordenado < 0 || ordenado > 15000)
 		printf("Ordenado inválido");
 		
 	if (premios < 0 || premios > 5100)
 		printf("Prêmio inválido");
 		
 	else if(ordenado >= 5000 && premios == 1000){
	 	printf("Salário muito bom");
	 }
	 	
	else if(ordenado >= 5000 && premios < 1000){
		printf("Salário bom");	
	}
		
	else if(ordenado < 5000 && premios >= 1000 ){
		printf("Salário satisfaz");	
	}
	else {
		printf("Salário não satisfaz");
	}
	
	
}


